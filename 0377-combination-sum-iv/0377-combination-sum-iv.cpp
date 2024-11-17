class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int sz = nums.size();
        vector<long long int> ans(target+1, 0);
        ans[0] = 1;
        for (int i = 0; i < target+1; i++) {
            for (int j=0; j < sz; j++) {
                if (target+1 > nums[j]+i) {
                    ans[nums[j]+i] += ans[i];
                    ans[nums[j]+i] %= 4611686018427387904ll;
                }
            }
        }
        return ans[target];
    }
};