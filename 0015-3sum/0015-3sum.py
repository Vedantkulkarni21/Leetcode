## without using set, unique lists, better one

# class Solution:
#     def threeSum(self, nums: list[int]) -> list[list[int]]:
#         arr=[]
#         dict={}
#         for i in range(len(nums)):
#             dict[nums[i]] = i
        
#         for i in range(len(nums)-1):
#             for j in range(i+1, len(nums)):
#                 temp = nums[i] + nums[j]
#                 if 0-temp in dict and (dict[0-temp]!=i and dict[0-temp]!=j):
#                     li = sorted([nums[i], nums[j], 0-temp])
#                     if li not in arr:
#                         arr.append(li)
        

#         return arr

## my better approach

# class Solution:
#     def threeSum(self, nums: list[int]) -> list[list[int]]:
#         sett = set()
#         dict={}
#         for i in range(len(nums)):
#             dict[nums[i]] = i
        
#         for i in range(len(nums)-1):
#             for j in range(i+1, len(nums)):
#                 temp = nums[i] + nums[j]
#                 if 0-temp in dict and (dict[0-temp]!=i and dict[0-temp]!=j):
#                     tu = tuple(sorted([nums[i], nums[j], 0-temp]))
#                     sett.add(tu)
        
#         result = [list(items) for items in sett]

#         return result


## clearing set everytime entering new values - striver better approach

# class Solution:
#     def threeSum(self, nums: list[int]) -> list[list[int]]:
#         sett = set()

#         for i in range(len(nums)-1):
#             hashset = set()
#             for j in range(i+1, len(nums)):
#                 sum = -(nums[i]+nums[j])
#                 if sum in hashset:
#                     temp = tuple(sorted([nums[i], nums[j], sum]))
#                     sett.add(temp)
#                 hashset.add(nums[j])
        
#         result = [list(items) for items in sett]
#         return result

## optimized approach

class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        ans=[]
        nums = sorted(nums)
        for i in range(len(nums)):
            if i>0 and nums[i] == nums[i-1]:
                continue
            j=i+1
            k=len(nums)-1
            while(j<k):
                if nums[i]+nums[j]+nums[k] < 0:
                    j+=1
                elif nums[i]+nums[j]+nums[k] > 0:
                    k-=1
                else:
                    temp = [nums[i], nums[j], nums[k]]
                    ans.append(temp)
                    j+=1 
                    k-=1
                    while(j<k and nums[j] == nums[j-1]):
                        j+=1
                    while(k>j and nums[k] == nums[k+1]):
                        k-=1
        
        return ans