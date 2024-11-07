class Solution {
public:
    int candy(vector<int>& ratings) {
        int sz = ratings.size();
        vector<int> ans(sz, 1);
        int retans=0;
        for (int i = 0; i < sz-1; i++) {
            if (ratings[i] < ratings[i+1]) {
                ans[i+1] = ans[i] + 1;
            }
        }
        for (int i = sz-1; i > 0; i--) {
            if (ratings[i] < ratings[i-1]) {
                ans[i-1] = max(ans[i] + 1, ans[i-1]);
            }
        }
        for (auto i : ans) {
            cout << i << " ";
            retans += i;
        }
        cout << endl;
        return retans;
    }
};