package array

import (
	"reflect"
	"testing"
)

func TestProductExceptSelf(t *testing.T) {
	tests := []struct {
		nums []int
		want []int
	}{
		{[]int{2, 0, 11, 0}, []int{0, 0, 0, 0}},
		{[]int{1, 2, 3, 4}, []int{24, 12, 8, 6}},
		{[]int{-1, 1, 0, -3, 3}, []int{0, 0, 9, 0, 0}},
	}

	for i, item := range tests {
		res := productExceptSelf(item.nums)
		if !reflect.DeepEqual(res, item.want) && !reflect.DeepEqual(res, swap(item.want)) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, res)
		}
		t.Logf("Passed %d test", i+1)
	}
}
