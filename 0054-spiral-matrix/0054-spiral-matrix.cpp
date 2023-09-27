class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size(); 
        
        int count=0;
        int left=0, right=col-1, top=0, bottom=row-1;

        while(left<=right && top<=bottom)
        {
            for(int i=left; i<=right; i++)
            {
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int i=top; i<=bottom; i++)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right; i>=left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    count++;
                }
                bottom--;
            }

            if(left <= right)
            {
                for(int i=bottom; i>=top; i--)
                {
                    ans.push_back(matrix[i][left]);
                    count++;
                }
                left++;
            }
        }
        return ans;
    }
};