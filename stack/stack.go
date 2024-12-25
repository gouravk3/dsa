package main

import (
	"fmt"
)

func main() {
	s := new(Stack)
	s.push(1)
	s.push(2)
	s.push(3)
	s.push(4)

	fmt.Printf("s.pop(): %v\n", s.pop())
	fmt.Printf("s.len(): %v\n", s.len())
	fmt.Printf("s: %v\n", s)
	fmt.Printf("s.peek(): %v\n", s.peek())
}

type Stack []int

func (s *Stack) push(n int) {
	*s = append(*s, n)
}

func (s *Stack) pop() int {
	end := s.len() - 1
	ret := (*s)[end]
	(*s) = (*s)[:end]
	return ret
}

func (s *Stack) peek() int {
	return (*s)[s.len()-1]
}

func (s *Stack) len() int {
	return len(*s)
}
