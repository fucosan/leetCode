class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = (int) nums.size();
        vector<int>mp(300);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mp[nums[i] + k];
            if (nums[i] - k >= 0) {
                ans += mp[nums[i] - k];
            }
            mp[nums[i]]++;
        }
        return ans;
    }
};