// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         map<int,int>mpp;
//         int count=0,maxi = 0;
//         for(int it:nums)
//         {
//             mpp[it]++;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             int num = nums[i];
//             while(mpp.find(num*num) != mpp.end())
//             {
//                 count++;
//                 num = num*num;
//             }
//             maxi = max(count,maxi);
//             count=0;
//         }
//         if(maxi == 0)
//             return -1;
//         return maxi+1;
//     }
// };

class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<int, int> mpp;
        int maxi = 0;

        for (int it : nums) {
            mpp[it]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int num = nums[i];
            
            while (num <= INT_MAX / num && mpp.find(num * num) != mpp.end()) {
                count++;
                num = num * num;
            }

            maxi = max(count, maxi);
        }

        return maxi == 0 ? -1 : maxi + 1;
    }
};
