class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        int cur_prev = 0;
        for (int i = 0; i < 24+1; i++) {
            for (int numcan = 0; numcan < candidates.size(); numcan++) {
                cur_prev += candidates[numcan] % 2 == 1 ? 1 : 0;
                candidates[numcan] >>= 1;
            }
            ans = max(ans, cur_prev);
            cur_prev = 0;
        }
        return ans;
    }
};