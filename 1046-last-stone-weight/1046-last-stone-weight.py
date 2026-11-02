class Solution(object):
    def lastStoneWeight(self, a):
        """
        :type stones: List[int]
        :rtype: int
        """
        n = len(a)
        while n>1:
            a.sort()
            x = a.pop()
            y = a.pop()
            if x!=y :
                a.append(x-y)
            n=len(a)
        if n == 0 :
            return 0
        return a[0]