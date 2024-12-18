package medium

import (
	"reflect"
	"testing"
)

func Test_merge(t *testing.T) {
	tests := [][][]int{
		{{15, 18}, {2, 6}, {1, 3}, {8, 11}, {9, 10}},
		{{1, 4}, {4, 5}},
		{{1, 4}, {2, 3}},
		{{1, 4}, {0, 0}},
	}
	want := [][][]int{
		{{1, 6}, {8, 11}, {15, 18}},
		{{1, 5}},
		{{1, 4}},
		{{0, 0}, {1, 4}},
	}
	for i, tt := range tests {
		t.Run("merge intervals", func(t *testing.T) {
			if got := merge(tt); !reflect.DeepEqual(got, want[i]) {
				t.Errorf("merge() = %v, want %v", got, want[i])
			}
		})
	}
}
