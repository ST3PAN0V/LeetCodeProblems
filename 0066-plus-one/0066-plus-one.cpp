class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool increase_next = true;
        for (int i = digits.size()-1; i >= 0; i--) {
            if (increase_next) {
                if (++digits[i] > 9) {
                    digits[i] = 0;
                } else increase_next = false;
            }
        }
        if (increase_next) {
            vector<int> ans = {1};
            ans.insert(ans.end(), digits.begin(), digits.end());
            return ans;
        }
        return digits;
    }
};