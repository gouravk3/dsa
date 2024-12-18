package medium

import (
	"sort"
)

func merge(intervals [][]int) [][]int {
	if len(intervals) <= 1 {
		return intervals
	}
	sort.Slice(intervals, func(i, j int) bool {
		return intervals[i][0] < intervals[j][0]
	})

	var merged [][]int

	var flag bool

	var m, n int = intervals[0][0], intervals[0][1]
	for i := 0; i < len(intervals); i++ {
		if n >= intervals[i][0] {
			if n < intervals[i][1] {
				n = intervals[i][1]
			}
		} else {
			merged = append(merged, []int{m, n})
			flag = false
		}
		if !flag {
			m, n = intervals[i][0], intervals[i][1]
			flag = true
		}
	}
	merged = append(merged, []int{m, n})

	return merged
}
