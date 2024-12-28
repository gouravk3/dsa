package main

import "fmt"

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

var m = make(map[int]bool)

func main() {
	tree := &TreeNode{Val: 2}
	tree.Left = &TreeNode{Val: 1}
	tree.Left.Left = nil
	tree.Left.Right = nil
	tree.Right = &TreeNode{Val: 5}
	tree.Right.Left = nil
	tree.Right.Right = &TreeNode{Val: 6}

	fmt.Println(isValidBST(tree))
}

func isValidBST(root *TreeNode) bool {
	if root == nil {
		return true
	}
	if root.Left == nil && root.Right == nil {
		m[root.Val] = true
		return true
	}
	m[root.Val] = true
	if root.Left != nil && root.Left.Val >= root.Val {
		return false
	}
	if root.Right != nil && root.Right.Val <= root.Val {
		return false
	}
	if root.Left != nil {
		if _, ok := m[root.Left.Val]; ok {
			return false
		}
	}
	if root.Right != nil {
		if _, ok := m[root.Right.Val]; ok {
			return false
		}
	}

	if l := isValidBST(root.Left); !l {
		return false
	}
	return isValidBST(root.Right)
}
