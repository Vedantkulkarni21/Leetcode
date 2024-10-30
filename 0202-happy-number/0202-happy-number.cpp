class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mpp;
        mpp[n]++;
        int num=0;
        while(mpp[n] <= 1)
        {
            while(n!=0)
            {
                int digit = n%10;
                n = n/10;
                num+= digit*digit;
            }
            if(num == 1)
                return true;
            mpp[num]++;
            n=num;
            num=0;
        }
        return false;
    }
};