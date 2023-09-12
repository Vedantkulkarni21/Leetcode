class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>mpp1,mpp2;
        for(int i:arr)
        {mpp1[i]++;}
        for(auto i:mpp1)
        {
            mpp2[i.second]++;
            if(mpp2[i.second]>1)
            {return false;}
        }    
        return true;
    }
};



// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         map<int , int> mpp;
//         vector<int>ans;
//         for(int i=0;i<arr.size();i++)
//         {
//             mpp[arr[i]]++;
//         }
//         for(auto i:mpp)
//         {
//             ans.push_back(i.second);
//         }
//         sort(ans.begin(),ans.end());
//         for(int i=0;i<ans.size()-1;i++)
//         {
//             if(ans[i]==ans[i+1])
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };