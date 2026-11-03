class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if len(nums) == 1:
            return 1
        arr = []
        for i in range(len(nums)):
            if i<len(nums)-1 and nums[i]==nums[i+1]:
                continue
            else:
                arr.append(nums[i])
                print(nums[i])
        
        nums[:] = arr
        return len(nums)
