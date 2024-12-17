package linkedlist

/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	res := &ListNode{}
	resHead := res

	carr := false
	for l1 != nil || l2 != nil || carr {
		var sum int
		if carr {
			sum += 1
			carr = false
		}
		if l1 != nil {
			sum += l1.Val
			l1 = l1.Next
		}
		if l2 != nil {
			sum += l2.Val
			l2 = l2.Next
		}

		t := &ListNode{}
		if sum > 9 {
			t.Val = sum - 10
			carr = true
		} else {
			t.Val = sum
		}
		res.Next = t

		res = res.Next
	}

	return resHead.Next
}
