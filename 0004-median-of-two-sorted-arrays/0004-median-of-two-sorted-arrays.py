class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1 = nums1+nums2
        nums1.sort()
        n = len(nums1)
        if n%2==0 :
            i = n/2 -1
            j = i+1
            res = (nums1[i]+nums1[j])/2.0
        else :
            i = n/2
            res = (nums1[i])/1.0
        return res 