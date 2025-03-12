class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int zero_count = 0;
        int answer = 0;
        if (nums.size() == 1) return 0;
        while (right < nums.size()) {
            if (nums[right] == 0) {
                zero_count++;
            }
            while(zero_count>1) {
                answer = max(right-left-1, answer);
                if (nums[left++] == 0) {
                    zero_count--;
                }
            }
            right++;
        }
        answer = max(right-left-1, answer);
        if (left == 0 && zero_count == 0) {
            answer = nums.size()-1;
        }
        return answer;
    }
};