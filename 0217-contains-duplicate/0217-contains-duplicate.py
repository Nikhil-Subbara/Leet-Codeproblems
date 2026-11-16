class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        res = set(nums)
        if len(res) < len(nums):
            return True
        return False