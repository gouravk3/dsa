package leetcode

func sortColors(nums []int)  {
    var pos0 int = -1
    var pos2 int = len(nums)
	// {1, 0, 2, 0, 0, 1, 1, 2},

    for i := 0; i < pos2; i++ {
        n := nums[i]
        if n == 0 {
            pos0++
            nums[i], nums[pos0] = nums[pos0], nums[i]
        }
        
        if n == 2 {
            pos2--
            if pos2 == 0 {
                pos0++
                nums[pos2], nums[pos0] = nums[pos0], nums[pos2]
            }
            nums[i], nums[pos2] = nums[pos2], nums[i]

        }
    }
}