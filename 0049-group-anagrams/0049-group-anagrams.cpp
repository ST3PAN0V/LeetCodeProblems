class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (const auto& word : strs) {
            string tmp = word;
            sort(tmp.begin(), tmp.end());
            mp[tmp].push_back(word);
        }
        vector<vector<string>> ans;
        for (const auto& vec : mp) {
            ans.push_back(vec.second);
        }
        return ans;
    }
};