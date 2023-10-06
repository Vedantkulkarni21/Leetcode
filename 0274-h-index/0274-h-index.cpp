class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int s=0,e=citations.size()-1,mid;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(citations[mid]<citations.size()-mid)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return citations.size()-s;
    }
};