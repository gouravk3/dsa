package array

func twoSum(nums []int, target int) []int {
	var content = make(map[int]int)
	for i, v := range nums {
		pos, ok := content[target-v]
		if ok {
			return []int{i, pos}
		}
		content[v] = i
	}
	return []int{}
}
