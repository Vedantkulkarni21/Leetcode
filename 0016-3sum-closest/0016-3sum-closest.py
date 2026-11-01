class Solution:
    def threeSumClosest(self, nums: list[int], target: int) -> int:
        ans = 0
        diff = float('inf')
        nums = sorted(nums)
        for i in range(len(nums)):
            j=i+1
            k=len(nums)-1
            while j<k:
                summ = nums[i]+nums[j]+nums[k]
                if abs(summ - target) < diff:
                    diff = abs(summ-target)
                    ans = summ

                if summ < target:
                    j+=1
                    while(j<k and nums[j] == nums[j-1]):
                        j+=1
                else:
                    k-=1
                    while(j<k and nums[k] == nums[k+1]):
                        k-=1
        
        return ans