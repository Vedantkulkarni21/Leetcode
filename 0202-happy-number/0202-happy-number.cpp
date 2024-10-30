class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mpp;
        mpp[n]++;
        while(mpp[n] <= 1)
        {
            string str = to_string(n);
            n=0;
            for(char it:str)
            {
                n+=((it-'0') * (it-'0'));
            }
            cout<<n<<endl;
            if(n==1)
                return true;
            mpp[n]++;
        }
        return false;
    }
};