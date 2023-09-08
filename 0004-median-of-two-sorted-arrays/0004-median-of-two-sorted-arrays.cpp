class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),ans.begin());
        sort(ans.begin(),ans.end());

        double val=0.0;
        if(ans.size()%2==0)
        {
            int mid=ans.size()/2;
            val=(ans[mid]+ans[mid-1])/2.0;
        }
        else
        {
            int mid=ans.size()/2;
            val=ans[mid];
        }

        return (double)val;
    }
};