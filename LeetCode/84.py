class Solution:
    def largestRectangleArea(self, heights) -> int:
        stack = []
        max_area = 0
        for i, h in enumerate(heights):
            start = i
            while stack and stack[-1][1] > h:
                index, height = stack.pop()
                max_area = max(max_area, (i - index)*height)
                start = index
            stack.append((start, h))
        for i, h in stack:
            max_area = max(max_area, (len(heights) - i)*h)
        return max_area

print(Solution().largestRectangleArea([2,1,5,6,2,3]))