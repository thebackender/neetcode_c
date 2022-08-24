class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        arr = dict()
        if len(s) != len(t):
            return False
        for a in s:
            if a in arr:
                arr[a] += 1
            else:
                arr[a] = 1
        for b in t:
            if b in arr:
                if arr[b] != 0:
                    arr[b] -= 1
                else:
                    return False
            else:
                return False
        return True