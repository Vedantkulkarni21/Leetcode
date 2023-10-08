class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            if (mpp.find(nums[i]) != mpp.end() && abs(i - mpp[nums[i]]) <= k) {
                return true;  // Found a nearby duplicate
            }
            mpp[nums[i]] = i;
        }
        return false;  // No nearby duplicates found
    }
};



// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         map<int,int>mpp;
//         for(int i=0;i<nums.size();i++)
//         {
//             if((nums[i]==nums[mpp[nums[i]]]) && (mpp[nums[i]]!=0) && abs(i-mpp[nums[i]])<=k)
//             {
//                 cout<<nums[mpp[nums[i]]]<<endl;
//                 return true;
//             }
            
//             mpp[nums[i]]=i;
//         }
//         for(auto it:mpp)
//         {
//             cout<<it.first<<" "<<it.second<<endl;
//         }
//         return false;
//     }
// };