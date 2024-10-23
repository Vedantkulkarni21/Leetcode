class Solution {
public:
    int reverse(int x) {
        int rem=0,num=0,X=abs(x);
        while(X > 0)
        {
            if(num > INT_MAX/10 || num < INT_MIN/10)
                return 0;
            rem = X%10;
            num = num * 10 + rem;
            X = X/10;
        }
        if(x<0)
            return -1 * num;
        else
            return num;
    }
};