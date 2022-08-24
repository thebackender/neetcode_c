class Solution:
    def productExceptSelf(self, nums):
        output = [1]*len(nums)
        pre = 1
        for i in range(len(nums)):
            output[i] = pre
            pre *= nums[i]
        post = 1
        for j in range(len(nums)-1, -1, -1):
            output[j] *= post
            post *= nums[j]
        return output

print(Solution().productExceptSelf([1,2,3,4]))