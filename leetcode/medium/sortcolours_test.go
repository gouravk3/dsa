package leetcode

import (
	"fmt"
	"reflect"
	"testing"
)

func Test_sortColors(t *testing.T) {
	tests := [][]int{
		{1, 0, 2, 0, 0, 1, 1, 2},
		{2, 1, 0},
		{2,0,1},
	}
	want := [][]int{
		{0, 0, 0, 1, 1, 2, 2},
		{0, 1, 2},
		{0, 1, 2},
	}

	for i := range tests {
		t.Run("sort colors", func(t *testing.T) {
			sortColors(tests[i])
			if !reflect.DeepEqual(tests[i], want[i]) {
				t.Errorf("want: %v, got: %v", want[i], tests[i])
			}
			fmt.Printf("want: %v, got: %v", want[i], tests[i])
		})
	}
}
