class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();
        vector<int> prefbegin(sz);
        vector<int> prefend(sz);
        prefbegin[0] = 1;
        prefend[sz-1] = 1;

        for (int i = 1; i < sz; i++) {
            prefbegin[i] = prefbegin[i-1] * nums[i-1];
            prefend[sz-1-i] = prefend[sz-i] * nums[sz-i];
        }
        vector<int> ans(sz);
        for (int i = 0; i < sz; i++) {
            ans[i] = prefbegin[i] * prefend[i];
        }
        return ans;
    }
};