class Solution(object):
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m = max(nums)
        count=0
        for i in range (0,len(nums)):
            dif=0
            if nums[i]!=m:
                dif=abs(m-nums[i])
            count=count+dif
            print(count)
        return count