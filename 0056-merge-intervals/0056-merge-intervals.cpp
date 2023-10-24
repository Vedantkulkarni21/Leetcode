class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());

        for(int i=0;i<intervals.size();i++)
        {
            if(ans.empty())
            {
                ans.push_back(intervals[i]);
            }
          
            else
            {
                vector<int>&copy = ans.back();  //returns pointer to last element of answer
                int y = copy[1];
                //overlapping
                if(y >= intervals[i][0])
                {
                    copy[1] = max(y, intervals[i][1]);
                }

                //not overlapping
                else
                {
                    ans.push_back(intervals[i]);
                }
            }
                
        }
        return ans;
    }
};