// leetcode 2981
package medium

import "testing"

func Test_maximumLength(t *testing.T) {
	tests := []string{
		"aaaa",
		"abcdef",
		"abcaba",
		"cccerrrecdcdccedecdcccddeeeddcdcddedccdceeedccecde",
	}
	want := []int{
		2,
		-1,
		1,
		2,
	}
	for i, tt := range tests {
		t.Run(tt, func(t *testing.T) {
			if got := maximumLength(tt); got != want[i] {
				t.Errorf("maximumLength() = %v, want %v", got, want[i])
			}
		})
	}
}
