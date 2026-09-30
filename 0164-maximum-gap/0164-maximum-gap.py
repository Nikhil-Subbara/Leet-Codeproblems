class Solution(object):
    def maximumGap(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        n = len(nums)

        if n < 2:
            return 0

        maxd = 0

        for i in range(1, n):
            diff = nums[i] - nums[i - 1]

            if maxd < diff:
                maxd = diff

        return maxd