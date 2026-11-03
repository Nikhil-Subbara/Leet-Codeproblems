class Solution(object):
    def addedInteger(self, a, b):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        m1 = min(a)
        m2 = min(b)
        res = m2 - m1
        return res