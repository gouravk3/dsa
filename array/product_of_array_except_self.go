package array

func productExceptSelf(nums []int) []int {
	l := len(nums)
	if l < 1 {
		return []int{0}
	}
	var res = make([]int, l)
	var product int = 1
	var count, index int

	for i, num := range nums {
		if num == 0 {
			count++
			if count > 1 {
				return res
			}
			index = i
			continue
		}

		product *= num
	}

	if count == 1 {
		res[index] = product
		return res
	}

	for i, num := range nums {
		if num == 0 {
			res[i] = product

			continue
		}
		res[i] = product / num
	}

	return res
}
