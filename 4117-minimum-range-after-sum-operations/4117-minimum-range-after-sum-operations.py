class Solution:
    def minRange(self, a: int, b: int, c: int) -> int:
        maxi = max(a,b,c)
        mini = min(a,b,c)
        if (a+b+c - maxi) < maxi:
            return (a+b+c - maxi) - mini
        return maxi - mini