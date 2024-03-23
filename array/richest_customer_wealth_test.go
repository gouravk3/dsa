package array

import (
	"reflect"
	"testing"
)

func TestMaximumWealth(t *testing.T) {
	tests := []struct {
		account [][]int
		want    int
	}{
		{[][]int{{1, 2, 3}, {3, 2, 1}}, 6},
		{[][]int{{1, 5}, {7, 3}, {3, 5}}, 10},
		{[][]int{{2, 8, 7}, {7, 1, 3}, {1, 9, 5}}, 17},
	}

	for i, item := range tests {
		res := maximumWealth(item.account)
		if !reflect.DeepEqual(res, item.want) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, res)
		}
		t.Logf("Passed %d test", i+1)
	}
}
