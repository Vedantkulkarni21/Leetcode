class Solution {
public:
    int reverse(int x) {
        int rhs=0,ans=0;
        cout<<x%10<<endl;
        cout<<INT_MAX;
        while(x!=0)
        {
            if(ans > INT_MAX/10 || ans < INT_MIN/10)
                return 0;
            rhs = x%10;
            ans = (ans*10)+rhs;
            x=x/10;
        }

        return ans;
    }
};