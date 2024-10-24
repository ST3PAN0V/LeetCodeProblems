class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128, -1);
        int l = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (v[s[i]] >= l) {
                ans = max(ans, i-l);
                l = v[s[i]]+1;
            }
            v[s[i]] = i;
        }
        ans = max(ans, static_cast<int>(s.size()-l));
        return ans;
    }
};