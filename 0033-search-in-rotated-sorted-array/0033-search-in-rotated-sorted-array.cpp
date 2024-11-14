class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz = nums.size();
        int l = 0;
        int r = sz-1;
        while(l < r) {
            int mid = (l+r)/2;
            if (nums[r] < nums[l]) {// with rotate 
                if ((nums[l] > target && (nums[mid] < target || (nums[mid] > target && nums[mid] >= nums[l]))) || nums[l] < target && (nums[mid] >= nums[l] && nums[mid] < target)) l = mid+1;
                else r = mid;
            } else {
                if (nums[mid] < target) l = mid+1;
                else r = mid;
            }
        }
        if (nums[l] == target) {
            return l;
        }
        return -1;
    }
};