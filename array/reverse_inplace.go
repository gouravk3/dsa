package array

func reverseInplace(arr []int) {
	l := len(arr)
	for i := 0; i < l/2; i++ {
		arr[l-i-1], arr[i] = arr[i], arr[l-i-1]
	}
}
