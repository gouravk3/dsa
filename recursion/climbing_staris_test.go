package recursion

import "testing"

func Test_climbStairs(t *testing.T) {
	tests := []int{
		2,
		3,
		44,
	}
	want := []int{
		2,
		3,
		1134903170,
	}
	for i := range tests {
		t.Run("climbing stairs recursion", func(t *testing.T) {
			if got := climbStairs(tests[i]); got != want[i] {
				t.Errorf("climbStairs() = %v, want %v", got, want[i])
			}
		})
	}
}
