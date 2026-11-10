class Solution(object):
    def trimMean(self, arr):
        """
        :type arr: List[int]
        :rtype: float
        """
        arr.sort()
        n = len(arr)
        k = int(n * 0.05)

        su = sum(arr[k:n-k])
        return su / float (n - 2*k)