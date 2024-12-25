package main

import (
	"fmt"
)

func main() {
	q := new(Queue)
	q.enqueue(1)
	q.enqueue(2)
	q.enqueue(3)
	q.enqueue(4)

	fmt.Printf("q.pop(): %v\n", q.dequeue())
	fmt.Printf("q.len(): %v\n", q.len())
	fmt.Printf("q: %v\n", *q)
	fmt.Printf("q.peek(): %v\n", q.peek())
}

type Queue []int

func (q *Queue) dequeue() int {
	if q.len() == 0 {
		fmt.Println("Queue is empty")
		return -1
	}
	ret := (*q)[0]
	(*q) = (*q)[1:]
	return ret
}

func (q *Queue) enqueue(n int) {
	*q = append(*q, n)
}

func (q *Queue) peek() int {
	if q.len() == 0 {
		fmt.Println("Queue is empty")
		return -1
	}
	return (*q)[0]
}

func (q *Queue) len() int {
	return len(*q)
}
