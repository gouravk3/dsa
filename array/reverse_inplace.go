package array

func reverseInplace(arr []int) []int {
	l := len(arr)
	for i := 0; i < l/2; i++ {
		tmp := arr[l-i-1]
		arr[l-i-1] = arr[i]
		arr[i] = tmp
	}

	// 1, 2, 3, 4

	return arr
}
