class Solution:
    def dailyTemperatures(self, temperatures):
        arr = list()
        output = [0]*len(temperatures)
        for i, t in enumerate(temperatures):
            while arr and arr[-1][1] < t:
                ind, temp = arr.pop()
                output[ind] = i - ind
            arr.append([i, t])
        return output
print(Solution().dailyTemperatures([73,74,75,71,69,72,76,73]))