class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, bool> mp;
        for (int i=0; i < paths.size(); i++) {
            mp[paths[i][1]] = true;
        }
        for (int i=0; i < paths.size(); i++) {
            mp[paths[i][0]] = false;
        }
        string ans = "";
        for ( auto p : mp) {
            if (p.second == true) ans = p.first;
        }
        return ans;
    }
};