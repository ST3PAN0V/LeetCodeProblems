class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) swap(nums1, nums2);
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for (const int i : nums1) {
            mp1[i]++;
        }
        for (const int i : nums2) {
            mp2[i]++;
        }
        vector<int> ans;
        for (const auto pr : mp1) {
            int tmp = min(pr.second, (mp2.find(pr.first) != mp2.end() ? mp2[pr.first]: 0));
            for (int i = 0; i<tmp; i++) {
                ans.push_back(pr.first);
            }
        }
        return ans;
    }
};