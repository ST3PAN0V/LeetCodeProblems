class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sz = nums.size();
        int ans = 0;
        int pointer = 0;
        for (int right = 0; right < sz; right++) {
            if (nums[right] != val) {
                nums[pointer++] = nums[right];
                ans++;
            }
        }
        return ans;
    }
};