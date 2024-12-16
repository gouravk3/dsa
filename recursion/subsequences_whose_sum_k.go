package recursion

import "fmt"

func subsequenceSumK(nums []int, k int) {
	n := len(nums)
	validSubsequences(0, make([]int, n), 0, n, k, nums)
}

func validSubsequences(idx int, arr []int, sum, n, k int, nums []int) {
	if idx == n {
		if sum == k {
			fmt.Printf("arr: %v\n", arr)
		}
		return
	}
	arr = append(arr, nums[idx])
	sum += nums[idx]
	validSubsequences(idx+1, arr, sum, n, k, nums)
	sum -= nums[idx]
	arr = arr[0 : len(arr)-1]
	validSubsequences(idx+1, arr, sum, n, k, nums)

}
