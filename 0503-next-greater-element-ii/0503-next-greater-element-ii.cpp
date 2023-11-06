class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int>ans(nums.size(),-1);
        stack<int>sta;
        for(int i=(nums.size()*2)-1 ; i>=0 ; i--)
        {
            while(!sta.empty() && sta.top() <= nums[i % nums.size()])
            {
                sta.pop();
            }

            if(!sta.empty() && i<nums.size())
            {
                ans[i] = sta.top();
            }

            sta.push(nums[i%nums.size()]);
        }
        return ans;
    }
};
        // for(int i=0;i<nums.size();i++)
        // {   
        //     if(i<nums.size()-1)
        //     {
        //         int j=0;
        //         bool flag=false;
        //         while(j<nums.size())
        //         {
        //             if(nums[j]>nums[i])
        //             {
        //                 flag=true;
        //             }
        //             j++;
        //         }
        //         if(flag==false)
        //         {
        //             nums[nums.size()]=-1;
        //         }
        //     }
        //     else
        //     {
        //         nums[0]=-1;
        //     }
        // }
        // return nums;