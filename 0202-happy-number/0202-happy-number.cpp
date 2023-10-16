class Solution {
public:
    int num(int number)
    {
        int sum=0;
        while(number>0)
        {
            int temp=number%10;
            temp=temp*temp;
            sum=temp+sum;
            temp=0;
            number=number/10;
        }
        cout<<sum<<endl;
        return sum;
    }   
    bool isHappy(int n) {
        map<int,int>mpp;
        int value=0;
        while(value!=1)
        {
            value=num(n);
            mpp[value]++;
            if(mpp[value]==2)
                return false;
            n=value;
        }
        return true;
    }
};