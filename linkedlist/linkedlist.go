package main

import "fmt"

type Node struct {
	data int
	next *Node
}

type List struct {
	head *Node
}

func (l *List) add(value int) {
	newNode := &Node{data: value}

	if l.head == nil {
		l.head = newNode
		return
	}

	curr := l.head
	for curr.next != nil {
		curr = curr.next
	}
	curr.next = newNode
}

func (l *List) remove(value int) {
	if l.head == nil {
		return
	}

	if l.head.data == value {
		l.head = l.head.next
		return
	}

	curr := l.head
	for curr.next != nil && curr.next.data != value {
		curr = curr.next
	}
	if curr.next != nil {
		curr.next = curr.next.next
	}
}

func main() {
	l := &List{}
	l.add(10)
	l.add(20)
	l.add(30)
	l.add(40)
	l.add(50)

	l.remove(20)

	curr := l.head
	for curr.next != nil {
		fmt.Printf("curr.data: %v\n", curr.data)
		curr = curr.next
	}
}
