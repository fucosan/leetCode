function maxProduct(nums: number[]): number {
    let mx1 = 0;
    let mx2 = 0;
    for (let i = 0; i < nums.length; i++) {
        if (mx1 < nums[i]) {
            if (mx2 < mx1) mx2 = mx1;
            mx1 = nums[i] 
            continue;
        }
        if (mx2 < nums[i]) {
            mx2 = nums[i];
        }
    }
    
    return (mx1 - 1) * (mx2 - 1);
};