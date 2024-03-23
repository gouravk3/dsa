package array

import (
	"reflect"
	"testing"
)

func TestContainsDuplicate(t *testing.T) {
	tests := []struct {
		nums []int
		want bool
	}{
		{[]int{}, false},
		{[]int{1, 2, 3, 1}, true},
		{[]int{1, 2, 3, 4}, false},
		{[]int{1, 1, 1, 3, 3, 4, 3, 2, 4, 2}, true},
	}

	for i, item := range tests {
		if !reflect.DeepEqual(containsDuplicate(item.nums), item.want) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, !item.want)
		}
		t.Logf("Passed %d test", i+1)
	}
}
