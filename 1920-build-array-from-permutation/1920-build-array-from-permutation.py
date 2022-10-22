class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        i = 0
        n = len(nums);
        ans = []
        while i < n:
            ans.append(nums[nums[i]])
            i += 1
        return ans
        