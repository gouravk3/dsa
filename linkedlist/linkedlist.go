package linkedlist

import "fmt"

// type ListNode struct {
// 	Val  int
// 	Next *ListNode
// }

type ListNode struct {
	Val int
	Next *ListNode
}

type LinkedList struct {
	head *ListNode
}

func (l *LinkedList) add(value int) {
	newNode := &ListNode{Val: value}

	if l.head == nil {
		l.head = newNode
		return
	}

	curr := l.head
	for curr.Next != nil {
		curr = curr.Next
	}
	curr.Next = newNode
}

func (l *LinkedList) remove(value int) {
	if l.head == nil {
		return
	}

	if l.head.Val == value {
		l.head = l.head.Next
		return
	}

	curr := l.head
	for curr.Next != nil && curr.Next.Val != value {
		curr = curr.Next
	}
	if curr.Next != nil {
		curr.Next = curr.Next.Next
	}
}

func main() {
	l := &LinkedList{}
	l.add(10)
	l.add(20)
	l.add(30)
	l.add(40)
	l.add(50)

	l.remove(20)

	curr := l.head
	for curr.Next != nil {
		fmt.Printf("curr.data: %v\n", curr.Val)
		curr = curr.Next
	}
}
