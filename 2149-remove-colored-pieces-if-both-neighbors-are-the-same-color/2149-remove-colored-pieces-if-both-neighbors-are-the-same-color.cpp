class Solution {
public:
    bool winnerOfGame(string colors) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        if(colors.size()<=2)
        {
            return false;
        }
        int a=0,b=0;
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i-1]=='A' && colors[i+1]=='A' && colors[i]=='A')
            {
                a++;
            }
            if(colors[i-1]=='B' && colors[i+1]=='B' && colors[i]=='B')
            {
                b++;
            }
        }
        if(a==b)
        {
            return false;
        }
        cout<<a<<" "<<b;
        return a<b?false:true;
    }
};