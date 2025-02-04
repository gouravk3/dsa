package main

import (
	"fmt"
	"math"
)

func main() {
	stones := []int{10, 30, 60, 20, 50, 10, 10, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 1010, 30, 60, 20, 50, 10}
	// stones := []int{10, 30, 60, 20, 50, 10, 10, 30, 60, 20, 50}
	k := 2

	// fmt.Printf("Minimum energy required: %v\n", frogJump(len(stones)-1, stones))

	dp := make([]int, len(stones)+1)
	for i := range dp {
		dp[i] = -1
	}

	// fmt.Printf("Minimum energy required Memo: %v\n", frogJumpMemo(len(stones)-1, stones, &dp))

	// fmt.Printf("Minimum energy required Tab: %v\n", frogJumpTab(stones))

	// fmt.Printf("Minimum energy required Tab Space Opt: %v\n", frogJumpTabSpaceOpt(stones))

	fmt.Printf("Minimum energy, K: %v\n", frogJumpK(len(stones)-1, stones, k))

	fmt.Printf("Minimum energy, K Memo: %v\n", frogJumpKMemo(len(stones)-1, stones, dp, k))

	fmt.Printf("Minimum energy, K: %v\n", frogJumpKTab(stones, k))
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

func frogJumpK(index int, arr []int, k int) int {
	if index == 0 {
		return 0
	}

	curr := math.MaxInt

	for i := 1; i <= k; i++ {
		if index-i >= 0 {
			energy := frogJumpK(index-i, arr, k) + abs(arr[index]-arr[index-i])
			curr = min(curr, energy)
		}
	}

	return curr
}

func frogJumpKMemo(index int, arr, dp []int, k int) int {
	if index == 0 {
		return 0
	}

	curr := math.MaxInt
	if dp[index] != -1 {
		return dp[index]
	}

	for i := 1; i <= k; i++ {
		if index-i >= 0 {
			energy := frogJumpKMemo(index-i, arr, dp, k) + abs(arr[index]-arr[index-i])
			curr = min(curr, energy)
		}
	}
	dp[index] = curr

	return curr
}

func frogJumpKTab(arr []int, k int) int {
	n := len(arr)
	dp := make([]int, n)
	dp[0] = 0

	for i := 1; i < n; i++ {
		curr := math.MaxInt
		for j := 1; j <= k; j++ {
			if i-j >= 0 {
				energy := dp[i-j] + abs(arr[i]-arr[i-j])
				curr = min(curr, energy)
			}
		}
		dp[i] = curr
	}

	return dp[n-1]
}

// {10, 30, 60, 20, 50, 10, 10, 30, 60, 20, 50, 10}
// { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11}
