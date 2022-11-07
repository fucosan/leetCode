class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = (int) nums.size();
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mp[nums[i] + k] + mp[nums[i] - k];
            mp[nums[i]]++;
        }
        return ans;
    }
};