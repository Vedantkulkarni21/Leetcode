class Solution {
public:
    bool isPalindrome(int x) {
        int rem=0,temp = x;
        long ans=0;
        if(x<0)
            return false;
        while(x!=0)
        { 
            rem = x%10;
            ans = ans*10+rem;
            x = x/10;
        }
        if(ans == temp)
            return true;
        return false;
    }
};