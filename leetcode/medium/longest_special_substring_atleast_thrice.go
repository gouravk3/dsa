// leetcode 2981
package medium

func maximumLength(s string) int {
	low, high, res := 1, len(s)-2, -1
	for low <= high {
		mid := low + (high-low)/2
		if helper(s, mid) {
			low = mid + 1
			res = mid
		} else {
			high = mid - 1
		}
	}

	return res
}

func helper(s string, mid int) bool {
	m := make(map[string]int)
	j := mid - 1
	for i := 0; i <= len(s)-mid; i++ {
		str := s[i : j+1]
		if isSpecial(str) {
			m[str]++
			if m[str] >= 3 {
				return true
			}
		}
		j++
	}

	return false
}

func isSpecial(s string) bool {
	for i := 1; i < len(s); i++ {
		if s[i] != s[0] {
			return false
		}
	}

	return true
}