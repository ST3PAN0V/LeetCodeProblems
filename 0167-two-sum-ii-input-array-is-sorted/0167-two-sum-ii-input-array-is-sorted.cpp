class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz = numbers.size();
        int l = 0;
        int r = sz-1;
        while(l < r) {
            if (numbers[l] + numbers[r] > target) {
                r--;
            } else if (numbers[l] + numbers[r] < target) {
                l++;
            } else return {l+1, r+1};
        }
        return {-1, -1};
    }
};