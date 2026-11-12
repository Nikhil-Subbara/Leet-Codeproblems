class Solution(object):
    def longestMonotonicSubarray(self, nums):
        n = len(nums)
        if n == 1:
            return 1

        inc = 1
        dec = 1
        res = 1

        for i in range(1, n):
            if nums[i] > nums[i-1]:
                inc += 1
            else:
                inc = 1

            if nums[i] < nums[i-1]:
                dec += 1
            else:
                dec = 1

            res = max(res, inc, dec)

        return res