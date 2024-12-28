package main

import (
	"fmt"
	"math"
)

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

func isValidBST(root *TreeNode) bool {
	return isValid(root, math.MinInt, math.MaxInt)
}

func isValid(root *TreeNode, min, max int) bool {
	if root == nil {
		return true
	}

	if min < root.Val && root.Val < max {
		return isValid(root.Left, min, root.Val) && isValid(root.Right, root.Val, max)
	}
	return false
}

func main() {
	tree := &TreeNode{Val: 2}
	tree.Left = &TreeNode{Val: 1}
	tree.Right = &TreeNode{Val: 5}
	tree.Right.Right = &TreeNode{Val: 6}

	fmt.Println(isValidBST(tree))
}
