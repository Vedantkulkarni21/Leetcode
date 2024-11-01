// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=0;
//         while(n<numbers.size())
//         {
//             int l=n+1,r=numbers.size()-1,mid=0;
//             while(l<=r)
//             {
//                 mid = l+(r-l)/2;
//                 if(numbers[mid] == (target-numbers[n]))
//                 {
//                     return {n+1,mid+1};
//                 } 
//                 else if(numbers[mid] > (target - numbers[n]))
//                 {
//                     r=mid-1;
//                 }
//                 else
//                 {
//                     l=mid+1;
//                 }
//             }
//             n++;
//         }
//         return {};
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r] > target)
            {
                r--;
            }
            else if(nums[l]+nums[r] < target)
            {
                l++;
            }
            else
            {
                return {l+1 ,r+1};
            }
        }
        return {};
    }
};