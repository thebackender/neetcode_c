class Solution:
    def groupAnagrams(self, strs):
        arr = dict()
        for s in strs:
            sum = 0
            for a in s:
                sum += ord(a) - 96
            arr.setdefault(sum, []).append(s)
        return list(arr.values())        

print(Solution().groupAnagrams(["eat","tea","tan","ate","nat","bat"]))
# ["ac", "d"] not working