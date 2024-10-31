class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1)
            return 0;
        if(nums.size() == 1)
            return 1;
        set<int>s;
        int count=0,maxi = 0;
        for(int it:nums)s.insert(it);
        auto it = s.begin();
        auto next = s.begin();
        next++;
        cout<<*it<<endl<<*next;
        while(next!=s.end()){
            if(*it +1 == *next) 
                count++;
            else{
                maxi = max(maxi,count);
                count=0;
            }
            it++;
            next++;
        }
        maxi = max(maxi, count);
        return maxi+1;
    }
};