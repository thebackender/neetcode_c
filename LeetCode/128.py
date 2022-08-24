from attr import asdict


class Solution:
    def longestConsecutive(self, nums) -> int:
        arr = set(nums)
        longest = 0
        for a in arr:
            if a - 1 not in arr:
                long = 0
                while a+long in arr:
                    long += 1
                longest = max(long, longest)
        return longest

print(Solution().longestConsecutive([]))