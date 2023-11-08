class Solution {
public:

    int find(string str)
{
         int count = 0;
         int temp = 0;
        int i=0;
       
   while (i!=str.length()){
      if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
         temp = 0;
      }
      else if(temp == 0){
         temp = 1;
         count++;
      }
      i++;
   }
   return count;
}
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        //Map will sort senders lexicographically  
        map<string,string> umap;
        string ans="";
        int count=0;
        for(int i=0;i<messages.size();i++)
        {
            if(umap[senders[i]]!="")
                umap[senders[i]]+=" ";
            umap[senders[i]]+=messages[i];
        }
        for(auto i=umap.begin();i!=umap.end();i++)
        {
            //Count Number of words for each Senders
            int c=find(i->second);
            //If count of words is greater than the last word count
            //Note: Map has already sorted Senders lexicographically
            if(c>=count)
            {
                count=c;
                ans=i->first;
            }
        }
        return ans;
    }
};