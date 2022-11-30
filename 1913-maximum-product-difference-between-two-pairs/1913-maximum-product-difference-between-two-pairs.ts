function maxProductDifference(nums: number[]): number {
    nums.sort((a: number, b: number) => a - b);
    let n = nums.length;
    //console.log(nums);
    return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
};