class Solution(object):
    def minimumSumSubarray(self, nums, l, r):
        """
        :type nums: List[int]
        :type l: int
        :type r: int
        :rtype: int
        """
        mi = 9999999
        n=len(nums)
        for i in range (0,n):
            su = 0
            for j in range (i,n):
                su= su+nums[j]
                le = j - i + 1
                if le>=l and le<=r:
                    if su>0 and su<mi:
                        mi = su
                if le>r:
                    break
        if mi == 9999999:
            return -1
        return mi