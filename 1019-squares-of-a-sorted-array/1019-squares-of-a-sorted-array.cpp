#include <cmath>

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size());
        int left = 0;
        int right = nums.size()-1;
        
        while (right >= left) {
            if (std::abs(nums[left]) > std::abs(nums[right])) {
                ans.push_back(pow(nums[left++], 2));
            } else ans.push_back(pow(nums[right--], 2));
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};