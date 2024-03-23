package array

import (
	"reflect"
	"testing"
)

func TestTwoSum(t *testing.T) {
	tests := []struct {
		nums   []int
		target int
		want   []int
	}{
		{[]int{3, 3}, 6, []int{0, 1}},
		{[]int{3, 2, 4}, 6, []int{1, 2}},
		{[]int{2, 7, 11, 15}, 9, []int{1, 0}},
	}

	for i, item := range tests {
		res := twoSum(item.nums, item.target)
		if !reflect.DeepEqual(res, item.want) && !reflect.DeepEqual(res, swap(item.want)) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, res)
		}
		t.Logf("Passed %d test", i+1)
	}
}

func swap(nums []int) []int {
	if len(nums) == 0 {
		return []int{}
	}
	nums[0], nums[1] = nums[1], nums[0]

	return nums
}
