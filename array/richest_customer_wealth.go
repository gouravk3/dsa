package array

func maximumWealth(accounts [][]int) int {
	var res int = 0
	for i := 0; i < len(accounts); i++ {
		var sum int
		for j := 0; j < len(accounts[i]); j++ {
			sum = sum + accounts[i][j]
		}
		if sum > res {
			res = sum
		}
	}
	return res
}
