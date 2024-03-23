package array

import (
	"reflect"
	"testing"
)

func TestMaxProfit(t *testing.T) {
	tests := []struct {
		prices []int
		want   int
	}{
		{[]int{7, 6, 4, 3, 1}, 0},
		{[]int{7, 1, 5, 3, 6, 4}, 5},
	}

	for i, item := range tests {
		res := maxProfit(item.prices)
		if !reflect.DeepEqual(res, item.want) {
			t.Fatalf("Failed test case %d. Want %#v got %#v", i+1, item.want, res)
		}
		t.Logf("Passed %d test", i+1)
	}
}
