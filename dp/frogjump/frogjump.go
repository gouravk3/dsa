package main

import (
	"fmt"
	"math"
)

func main() {
	stones := []int{10, 30, 60, 20, 50, 10, 10, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 10}

	// fmt.Printf("Minimum energy required: %v\n", frogJump(len(stones)-1, stones))

	// dp := make([]int, len(stones)+1)
	// for i := range dp {
	// 	dp[i] = -1
	// }
	// fmt.Printf("Minimum energy required Memo: %v\n", frogJumpMemo(len(stones)-1, stones, &dp))

	// fmt.Printf("Minimum energy required Tab: %v\n", frogJumpTab(stones))

	fmt.Printf("Minimum energy required Tab Space Opt: %v\n", frogJumpTabSpaceOpt(stones))

}

func frogJump(index int, arr []int) int {
	if index == 0 {
		return 0
	}

	left := frogJump(index-1, arr) + abs(arr[index]-arr[index-1])
	right := math.MaxInt
	if index > 1 {
		right = frogJump(index-2, arr) + abs(arr[index]-arr[index-2])
	}

	return min(left, right)
}

func frogJumpMemo(index int, arr []int, dp *[]int) int {
	if index == 0 {
		return 0
	}

	if (*dp)[index] != -1 {
		return (*dp)[index]
	}
	left := frogJumpMemo(index-1, arr, dp) + abs(arr[index]-arr[index-1])
	right := math.MaxInt
	if index > 1 {
		right = frogJumpMemo(index-2, arr, dp) + abs(arr[index]-arr[index-2])
	}

	(*dp)[index] = min(left, right)
	return (*dp)[index]
}

func abs(v int) int {
	if v < 0 {
		return -v
	}
	return v
}

func frogJumpTab(arr []int) int {
	n := len(arr)
	dp := make([]int, n)

	dp[0] = 0

	for i := 1; i < n; i++ {
		left := dp[i-1] + abs(arr[i]-arr[i-1])

		right := math.MaxInt
		if i > 1 {
			right = dp[i-2] + abs(arr[i]-arr[i-2])
		}

		dp[i] = min(left, right)
	}

	return dp[n-1]
}

func frogJumpTabSpaceOpt(arr []int) int {
	n := len(arr)

	prev := 0
	prev2 := 0

	for i := 1; i < n; i++ {
		curr := 0
		left := prev + abs(arr[i]-arr[i-1])

		right := math.MaxInt
		if i > 1 {
			right = prev2 + abs(arr[i]-arr[i-2])
		}

		curr = min(left, right)
		prev2 = prev
		prev = curr
	}

	return prev
}
