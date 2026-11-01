class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        smallest = min(strs, key=len)
        ans=""
        if len(smallest) == 0:
            return ans
        for j in range(len(smallest)):
            for i in range(len(strs)):
                if i==len(strs)-1 and strs[i][j] == smallest[j]:
                    ans+=smallest[j]
                elif strs[i][j] != smallest[j]:
                    return ans
                
        return ans