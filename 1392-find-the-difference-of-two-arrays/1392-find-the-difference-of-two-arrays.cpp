class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> mp1;
        unordered_map<int, bool> mp2;
        for (int i = 0; i < nums1.size(); i++) {
            mp1[nums1[i]] = true;
        }
        for (int i = 0; i < nums2.size(); i++) {
            mp2[nums2[i]] = true;
        }
        vector<vector<int>> ans(2, vector<int>());
        for (auto pair : mp1) {
            if (mp2.find(pair.first) == mp2.end()) ans[0].push_back(pair.first);
        }
        for (auto pair : mp2) {
            if (mp1.find(pair.first) == mp1.end()) ans[1].push_back(pair.first);
        }
        return ans;
    }
};