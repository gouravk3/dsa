package medium

func duplicateZeros(arr []int) {
	countZeros := 0
	n := len(arr) - 1

	i := 0
	extraZero := false

	for i <= n-countZeros {
		if arr[i] == 0 {
			countZeros++
			if i > n-countZeros {
				extraZero = true
				countZeros--
			}
		}
		i++
	}

	for i := n - countZeros; i >= 0; i-- {
		if arr[i] == 0 && countZeros > 0 {
			if !extraZero {
				arr[i+countZeros] = 0
				countZeros--
			}
            extraZero = false
		}

		arr[i+countZeros] = arr[i]
	}
}