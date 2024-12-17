package linkedlist

import (
	"reflect"
	"testing"
)

func Test_addTwoNumbers(t *testing.T) {
	type testCase struct {
		l1 []int
		l2 []int
	}
	tests := []testCase{
		{
			l1: []int{2, 4, 3},
			l2: []int{5, 6, 4},
		},
		{
			l1: []int{0},
			l2: []int{0},
		},
		{
			l1: []int{9, 9, 9, 9, 9, 9, 9},
			l2: []int{9, 9, 9, 9},
		},
	}
	want := [][]int{
		{7, 0, 8},
		{0},
		{8, 9, 9, 9, 0, 0, 0, 1},
	}
	for i, tt := range tests {
		var l1, l2, res = &LinkedList{}, &LinkedList{}, &LinkedList{}
		for _, n := range tt.l1 {
			l1.add(n)
		}
		for _, n := range tt.l2 {
			l2.add(n)
		}
		for _, n := range want[i] {
			res.add(n)
		}

		t.Run("add two numbers", func(t *testing.T) {
			if got := addTwoNumbers(l1.head, l2.head); !reflect.DeepEqual(got, res.head) {
				var gotRes []int
				for got != nil {
					gotRes = append(gotRes, got.Val)
					got = got.Next
				}
				t.Errorf("addTwoNumbers() = %v, want %v", gotRes, want[i])
			}
		})
	}
}
