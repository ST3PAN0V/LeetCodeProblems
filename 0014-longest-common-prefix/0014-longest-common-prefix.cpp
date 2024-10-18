class Solution {
public:
    int helperFunc(vector<string>& strs) {
        int ans = 0;
        while(true) {
            char cur_ch = strs[0][ans];
            for (const auto& str : strs) {
                if (ans >= str.size()) return ans;
                else {
                    if (str[ans] != cur_ch) return ans;
                }
            }
            ans++;
        }
        return 0;
    }

    string longestCommonPrefix(vector<string>& strs) {
        int count_letters = helperFunc(strs);
        return strs[0].substr(0,count_letters);

    }
};