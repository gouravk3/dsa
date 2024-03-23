package array

import (
	"reflect"
	"testing"
)

func TestRunningSum(t *testing.T) {
	tests := []struct {
		nums []int
		want []int
	}{
		{[]int{1, 2, 3, 4}, []int{1, 3, 6, 10}},
		{[]int{1, 1, 1, 1, 1}, []int{1, 2, 3, 4, 5}},
		{[]int{3, 1, 2, 10, 1}, []int{3, 4, 6, 16, 17}},
	}

	for i, item := range tests {
		res := runningSum(item.nums)
		if !reflect.DeepEqual(res, item.want) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, res)
		}
		t.Logf("Passed %d test", i+1)
	}
}
