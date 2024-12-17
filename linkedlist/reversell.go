package linkedlist

func reverseList(head *ListNode) *ListNode {
	var prev, next *ListNode
	var curr *ListNode = head

	for curr != nil {
		next = curr.Next
		curr.Next = prev
		prev = curr
		curr = next
	}
	return prev
}
