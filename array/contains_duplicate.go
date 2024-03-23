package array

func containsDuplicate(nums []int) bool {
	if len(nums) <= 1 {
		return false
	}
	var reg = make(map[int]int)
	for i, num := range nums {
		if _, ok := reg[num]; ok {
			return true
		}

		reg[num] = i
	}

	return false
}
