class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        # if len(nums) == 1:
        #     return 1
        # arr = []
        # for i in range(len(nums)):
        #     if i<len(nums)-1 and nums[i]==nums[i+1]:
        #         continue
        #     else:
        #         arr.append(nums[i])
        #         print(nums[i])
        
        # nums[:] = arr
        # return len(nums)

        if len(nums) == 1:
            return 1
        i=0
        j=0

        while j<len(nums)-1:
            while j<len(nums)-1 and nums[j] == nums[i]:
                j+=1
                
            if nums[j]!=nums[i]:
                i+=1
                nums[i] = nums[j]

        return i+1
