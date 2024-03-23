package array

func runningSum(nums []int) []int {
	var res = make([]int, len(nums))
	for i, val := range nums {
		if i == 0 {
			res[0] = val
			continue
		}
		res[i] = val + res[i-1]
	}
	return res
}
