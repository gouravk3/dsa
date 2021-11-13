/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let max = Number.MIN_VALUE, max2 = Number.MIN_VALUE;
    for(let i = 0; i < nums.length; i++)
    {
        if(nums[i] > max) {
            max2 = max;
            max = nums[i];
        }
        if(nums[i] > max2 && max > nums[i]) max2 = nums[i];
    }
    
    return max2;
}