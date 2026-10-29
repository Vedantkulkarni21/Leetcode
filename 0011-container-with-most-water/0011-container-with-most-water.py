class Solution:
    def maxArea(self, height: list[int]) -> int:
        i=0
        j=len(height)-1
        maxi=0
        while i<j:
            small = min(height[i], height[j])
            dist = j-i
            if dist*small > maxi:
                maxi = dist*small

            if height[i] <= height[j]:
                i+=1
            elif height[j] < height[i]:
                j-=1
            
        return maxi