class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<string,int>mpp;
        for(int i=0;i<grid.size();i++)
        {
            string str;
            for(int j=0;j<grid[i].size();j++)
            {
                str+=to_string(grid[i][j]);
                str+=" ";
            }
            mpp[str]++;
        }
        
        int count = 0;
        for(int i=0;i<grid.size();i++)
        {
            string str;
            for(int j=0;j<grid[i].size();j++)
            {
                str+=to_string(grid[j][i]);
                str+=" ";
            }
            if(mpp[str] != 0)
            {
                cout<<str<<endl;
                count+=mpp[str];
            }
        }
        return count;
    }
};