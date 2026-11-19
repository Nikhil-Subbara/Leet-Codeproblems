class Solution(object):
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        nums.sort()
        x = nums[n-1] * nums[n-2] * nums[n-3]
        y = nums[0] * nums[1] * nums[n-1]
        return max(x, y)