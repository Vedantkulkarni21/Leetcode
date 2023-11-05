class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        // int flag=0;
        for(int it=0; it<nums1.size() ;it++)
        {
            int i=0;
            int temp=0;
            while(nums1[it]!=nums2[i])
            {
                i++;
                temp=i;
            }
            for(;i<nums2.size();i++)
            {
                if(nums2[i] > nums1[it])
                {
                    ans.push_back(nums2[i]);
                    break;
                }
                if(i == nums2.size()-1)
                {
                    ans.push_back(-1);
                }
            }

        }
        return ans;
    }
};