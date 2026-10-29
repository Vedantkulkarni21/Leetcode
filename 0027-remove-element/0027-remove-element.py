class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        
        if len(nums) == 1:
            if(nums[0]==val):
                return 0
            return 1
            
        i=0
        j=len(nums)-1

        while i<j:
            while i<len(nums) and nums[i]!=val:
                i+=1
            
            while j>i and nums[j]==val:
                j-=1
            
            if j>=0 and i<len(nums):
                nums[i], nums[j] = nums[j], nums[i]
        
        return i