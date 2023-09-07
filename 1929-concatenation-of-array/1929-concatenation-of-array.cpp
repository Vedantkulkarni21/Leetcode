class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            nums.push_back(nums[i]);
        }return nums;
    }
};
