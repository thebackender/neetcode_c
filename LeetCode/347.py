class Solution:
    def topKFrequent(self, nums, k: int):
        data = dict()
        for num in nums:
            if num in data: 
                data[num] += 1
            else: 
                data[num] = 1
        return list(dict(sorted(data.items(), key=lambda item: item[1], reverse=True)).keys())[:k]

print(Solution().topKFrequent([1,1,1,2,2,3], 2))