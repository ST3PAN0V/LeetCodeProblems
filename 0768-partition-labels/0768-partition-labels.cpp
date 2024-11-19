class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        int sz = s.size();
        for (int i = 0; i < sz; i++) {
            mp[s[i]] = i;
        }
        vector<int> ans;
        int l = 0;
        int r = 0;
        int start = 0;
        while(r < sz) {
            r = max(r, mp[s[l]]);
            if (l >= r) {
                ans.push_back(r - start + 1);
                r++;
                start = r;
            }
            l++;
        }
        return ans;
    }
};