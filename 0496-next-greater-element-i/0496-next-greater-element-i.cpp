class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>mpp;
        for(int i = 0; i<nums2.size(); i++)
        {
            int flag = 0;
            for(int j = i+1; j<nums2.size(); j++)
            {
                if(nums2[i] < nums2[j])
                {
                    mpp[nums2[i]] = nums2[j];
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                mpp[nums2[i]] = -1;
        }

        vector<int>ans;
        for(int i:nums1)
        {
            //cout<<i<<endl;
            ans.push_back(mpp[i]);
        }

        return ans;
    }
};