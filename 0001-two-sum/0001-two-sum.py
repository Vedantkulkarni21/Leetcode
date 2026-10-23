class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        # for i in range(len(nums)):
        #     for j in range(i+1, len(nums)):
        #         if target-nums[j] == nums[i]:
        #             return [i,j]
        # return []

        dict = {}
        for i in range(len(nums)):
            dict[nums[i]] = i
        
        for i in range(len(nums)):
            if target-nums[i] in dict and dict[target-nums[i]] != i:
                return[i, dict[target-nums[i]]]
        
        return []