class Solution:
    def isHappy(self, n: int) -> bool:
        arr = set()
        while n != 1:
            if n in arr:
                return False
            arr.add(n)
            new_n = 0
            while n:
                new_n += (n%10)*(n%10)
                n = n//10
            n = new_n
        return True

print(Solution().isHappy(2))