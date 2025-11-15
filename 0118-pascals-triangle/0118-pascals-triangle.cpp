class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans =  {{1}, {1,1}};
        if(numRows==1)
            return {{1}};
        if(numRows==2)
            return ans;
        //vector<int>vec={1};
        for(int i=2;i<numRows;i++)
        {
            vector<int>vec={1};
            for(int j=1;j<i;j++)
            {
                vec.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            vec.push_back(1);
            ans.push_back(vec);
        }
        return ans;
    }
};