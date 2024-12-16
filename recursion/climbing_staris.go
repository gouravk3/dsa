package recursion

func climbStairs(n int) int {
	return climb(n)
}

func climb(n int) int {
	if n == 1 {
		return 1
	}

	if n == 2 {
		return 2
	}

	return climb(n-1) + climb(n-2)
}
