class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int sz = nums.size();
        vector<string> ans;
        string path;
        if (sz == 0) return {};
        path += to_string(nums[0]);
        for (int i = 1; i < sz; i++) {
            if (nums[i-1] != nums[i]-1) {
                if (path != to_string(nums[i-1])) {
                    path += "->" + to_string(nums[i-1]);
                }
                ans.push_back(path);
                path = "";
                path += to_string(nums[i]);
            }
        }
        if (path != to_string(nums[sz-1])) {
                    path += "->" + to_string(nums[sz-1]);
                }
                ans.push_back(path);
        return ans;
    }
};