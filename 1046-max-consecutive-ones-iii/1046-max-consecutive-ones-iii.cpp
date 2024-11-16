class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int sz = nums.size();
        int left = 0;
        int right = 0;
        int zeros = 0;
        while (right != sz) {
            if (nums[right] == 0) {
                zeros++;
                while(zeros > k) {
                    if (nums[left] == 0) zeros--;
                    left++;
                }
            }
            ans = max(ans, right - left + 1);
            right++;
        }
        ans = max(ans, right - left);
        return ans;
    }
};