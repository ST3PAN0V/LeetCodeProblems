class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int sz = nums.size();
        vector<int> dp(sz,0);
        int cur_max = 0;
        for (int i=0; i < sz; i++) {
            if (nums[cur_max] < nums[i]) {
                dp[i] = dp[cur_max]+1;
                cur_max = i;
            } else {
                int prev_idx = i;
                for (int j = i; j >= 0; j--) {
                    if (nums[j] < nums[i]) {
                        prev_idx = dp[j] > dp[prev_idx] ? j : prev_idx;
                    }
                }
                dp[i] = dp[prev_idx]+1;
                if (dp[i] == dp[cur_max]) cur_max = nums[cur_max] > nums[i] ? i : cur_max;
            }
        }
        int mm = -100000;
        for (int i  = 0; i < sz; i++) {
            mm = max(mm, dp[i]);
        }
        return mm;
    }
};