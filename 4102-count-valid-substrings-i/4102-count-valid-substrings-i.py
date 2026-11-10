# class Solution:
#     def countValidSubstrings(self, s: str) -> int:
#         a_occ = s.find("a")
#         b_occ = 0
#         c_occ = 0
#         for i in range(a_occ, len(s)):
#             if s[i] == "b":
#                 b_occ = i
#                 break

#         for i in range(b_occ, len(s)):
#             if s[i] == "c":
#                 c_occ = i
#                 break

#         count = len(s) - c_occ
#         n = len(s)
#         return ((n*(n+1)) // 2) - count
class Solution:
    def countValidSubstrings(self, s: str) -> int:

        n, ptr, abc = len(s), 0, 0
        ans = (n * n + n) // 2
        abc = s.find('abc')

        while abc != -1:
            abc+= 1
            ans-= (abc - ptr) * (n - 1 - abc)
            abc, ptr = s.find('abc', ptr), abc

        return ans