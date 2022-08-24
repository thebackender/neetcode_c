class Solution:
    def searchMatrix(self, matrix, target: int) -> bool:
        top = 0
        bottom = len(matrix) - 1
        while top <= bottom:
            mid = (top+bottom)//2
            if target > matrix[mid][-1]:
                top = mid + 1
            elif target < matrix[mid][0]:
                bottom = mid - 1
            else:
                l, r = 0, len(matrix[mid]) - 1
                while l <= r:
                    m = (l+r)//2
                    if target > matrix[mid][m]:
                        l = m + 1
                    elif target < matrix[mid][m]:
                        r = m - 1
                    else:
                        return True
                return False
        return False

print(Solution().searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 7))