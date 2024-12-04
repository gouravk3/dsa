package easy

func moveZeroes(nums []int)  {
    x := 0

    for i := 0; i < len(nums); i++ {
        if nums[i] != 0 {
            nums[i], nums[x] = nums[x], nums[i]
            x++
        }
    }
}