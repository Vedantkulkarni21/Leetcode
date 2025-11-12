class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = INT_MAX;
        string smallest_string = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < min) {
                smallest_string = strs[i];
                min = strs[i].size();
            }
        }
        string str;
        cout << str;
        for (int i = 0; i < smallest_string.size(); i++) {
            bool flag = false;
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != smallest_string[i]) {
                    flag = true;
                }
            }
            if (flag)
                return str;
            else
                str += smallest_string[i];
        }
        return str;
    }
};