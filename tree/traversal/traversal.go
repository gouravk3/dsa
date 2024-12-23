package main

import "fmt"

type node struct {
	data  int
	left  *node
	right *node
}

func main() {
	tree := &node{data: 1}
	tree.left = &node{data: 2}
	tree.right = &node{data: 3}
	tree.left.left = &node{data: 4}
	tree.left.right = &node{data: 5}
	tree.left.right.left = &node{data: 6}
	tree.right.left = &node{data: 7}
	tree.right.right = &node{data: 8}
	tree.right.right.left = &node{data: 9}
	tree.right.right.right = &node{data: 10}

	fmt.Printf("\nPreorder: ")
	preorder(tree)
	fmt.Printf("\nInorder: ")
	inorder(tree)
	fmt.Printf("\nPostorder: ")
	postorder(tree)
	fmt.Printf("\nLevel order: ")
	bfs(tree)
}

func preorder(node *node) {
	if node == nil {
		return
	}
	fmt.Printf("%v ", node.data)
	preorder(node.left)
	preorder(node.right)
}

func inorder(node *node) {
	if node == nil {
		return
	}
	inorder(node.left)
	fmt.Printf("%v ", node.data)
	inorder(node.right)
}

func postorder(node *node) {
	if node == nil {
		return
	}
	postorder(node.left)
	postorder(node.right)
	fmt.Printf("%v ", node.data)
}

// level order traversal
func bfs(tree *node) {
	q := []*node{tree}
	for len(q) > 0 {
		l := len(q)
		arr := make([]int, l)
		tmp := q
		for _, n := range q {
			fmt.Printf("%v ", n.data)
		}
		q = nil
		for i, n := range tmp {
			arr[i] = n.data
			if n.left != nil {
				q = append(q, n.left)
			}
			if n.right != nil {
				q = append(q, n.right)
			}
		}
	}
}
