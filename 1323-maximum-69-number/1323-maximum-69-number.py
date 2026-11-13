class Solution(object):
    def maximum69Number(self, num):
        res = num
        c = 0

        while res != 0:
            dig = res % 10
            c += 1
            res = res // 10

        nums = []
        for i in range(c):
            dig = num % 10
            nums.append(dig)
            num = num // 10

        nums.reverse()

        if 6 not in nums:
            return int(''.join(map(str, nums)))
        else:
            j = nums.index(6)
            nums[j] = 9

        return int(''.join(map(str, nums)))