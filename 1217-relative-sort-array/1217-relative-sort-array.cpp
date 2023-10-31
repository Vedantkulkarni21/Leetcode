class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mpp;
        vector<int>ans,temp;
        for(int it:arr1)
        {
            mpp[it]++;
        }
        for(int it:arr2)
        {
            while(mpp[it])
            {
                ans.push_back(it);
                mpp[it]--;
            }
        }
        for(auto it:mpp)
        {
            if(it.second!=0)
            {
                while(it.second)
                {
                    temp.push_back(it.first);
                    it.second--;
                }
            }
        }
        for(int it:temp)
        {
            ans.push_back(it);
        }
        return ans;
    }
};