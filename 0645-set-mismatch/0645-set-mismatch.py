class Solution(object):
    def findErrorNums(self, a):
        n = len(a)

        a.sort()

        ans = [0, 0]

        # Finding duplicate
        for i in range(n-1):
            if a[i] == a[i+1]:
                ans[0] = a[i]
                break

        # Finding missing number
        k = 1
        for i in range(n):
            if a[i] == k:
                k += 1
            elif a[i] > k:
                ans[1] = k
                return ans

        ans[1] = k
        return ans