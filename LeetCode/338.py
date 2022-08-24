class Solution:
    def countBits(self, n: int):
        arr = list()
        for a in range(n+1):
            arr.append(bin(a).count('1'))
        return arr
print(Solution().countBits(2))