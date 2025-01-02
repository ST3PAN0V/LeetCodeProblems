class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_map<char,int> vowels = {{'a',1}, {'e',1},{'i',1},{'o',1}, {'u',1}};
        int szw = words.size();
        vector<int> pref_sum(szw+1);
        for (int i = 0; i < szw; i++) {
            pref_sum[i+1] = pref_sum[i];
            if (vowels[words[i][0]] == 1 && vowels[words[i][words[i].size()-1]] == 1) pref_sum[i+1] += 1;
        }
        int szq = queries.size();
        vector<int> ans(szq);
        for (int i = 0; i < szq; i++) {
            ans[i] = pref_sum[queries[i][1]+1] - pref_sum[queries[i][0]];
        }
        return ans;
    }
};