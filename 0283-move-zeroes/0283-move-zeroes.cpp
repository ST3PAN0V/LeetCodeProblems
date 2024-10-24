class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        int slow = 0;
        int fast = 0;
        while(fast < sz) {
            if (nums[fast] != 0) {
                swap(nums[fast++], nums[slow++]);
            } else {
                fast++;
            }
        }
    }
};