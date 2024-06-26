class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int it:nums)
        {
            if(it==0) z++;
            else if(it==1) o++;
            else t++;
        }
        nums.clear();
        while(z || o || t)
        {
            while(z)
            {
                nums.push_back(0);
                z--;
            }
            while(o)
            {
                nums.push_back(1);
                o--;
            }
            while(t)
            {
                nums.push_back(2);
                t--;
            }
        }
    }
};