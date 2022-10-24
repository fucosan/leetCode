class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int a = nums[j] - nums[i];
                if (a != diff) continue;
                for (int k = j + 1; k < n; k++) {
                    if (a == nums[k] - nums[j]) {
                        cnt++;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};