package main

import "fmt"

func main() {
	n := 100
	dp := make([]int, n+1)
	for i := 0; i <= n; i++ {
		dp[i] = -1
	}

	fmt.Printf("fibonacciTabulation: %v\n", fibonacciTabulation(n, &dp))

	fmt.Printf("fibonacciTabulationSPOpt: %v\n", fibonacciTabulationSPOpt(100))
}

// top down approch n - 0
func fiboRecursionMemo(n int, dp *[]int) int {
	if n < 2 {
		return n
	}

	if (*dp)[n] != -1 {
		return (*dp)[n]
	}

	(*dp)[n] = fiboRecursionMemo(n-1, dp) + fiboRecursionMemo(n-2, dp)

	return (*dp)[n]
}

// bottom up approach 0 - n tabulation
func fibonacciTabulation(n int, dp *[]int) int {
	(*dp)[0] = 0
	(*dp)[1] = 1

	for i := 2; i <= n; i++ {
		(*dp)[i] = (*dp)[i-1] + (*dp)[i-2]
	}

	return (*dp)[n]
}

// bottom up approach 0 - n tabulation space optimised
func fibonacciTabulationSPOpt(n int) int {
	last, secondLast := 0, 1
	for i := 2; i <= n; i++ {
		curr := last + secondLast
		last = secondLast
		secondLast = curr
	}

	return secondLast
}
