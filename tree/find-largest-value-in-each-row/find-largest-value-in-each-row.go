package findlargestvalueineachrow

import "math"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func largestValues(root *TreeNode) []int {
	var res []int
	if root == nil {
		return res
	}
	q := new(queue)
	q.enqueue(root)
	for q.len() != 0 {
		l := q.len()
		max := math.MinInt
		for range l {
			n := q.dequeue()
			if n.Left != nil {
				q.enqueue(n.Left)
			}
			if n.Right != nil {
				q.enqueue(n.Right)
			}
			if n.Val > max {
				max = n.Val
			}
		}
		res = append(res, max)
	}

	return res
}

type queue []*TreeNode

func (q *queue) enqueue(node *TreeNode) {
	(*q) = append(*q, node)
}

func (q *queue) dequeue() *TreeNode {
	t := (*q)[0]
	(*q) = (*q)[1:]
	return t
}

func (q *queue) len() int {
	return len(*q)
}
