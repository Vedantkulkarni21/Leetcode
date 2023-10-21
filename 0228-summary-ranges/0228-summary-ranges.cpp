class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>arr;
        string st;
        if(nums.size()==1)
        {
            st+=to_string(nums[0]);
            arr.push_back(st);
            return arr;
        }

        for(int i=0;i<nums.size();i++)
        {
            string a=to_string(nums[i]);
            while(i<nums.size()-1 && nums[i+1]==nums[i]+1)
            {
                i++;
            }
            string b=to_string(nums[i]);
            
            if(a!=b)
            {
                st+=a;
                st+="->";
                st+=b;
                arr.push_back(st);
                st="";
            }
            else{
                st+=a;
                arr.push_back(st);
                st="";
            }
        }
        
        return arr;
    }
};