class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return (a[0] < b[0]) || (a[0] == b[0] && a[1] < b[1]);
        });

        int sz = intervals.size();
        vector<vector<int>> ans;
        vector<int> path_ans = intervals[0];
        for (int i=1; i < sz; i++) {
            if (path_ans[1] < intervals[i][0]) {
                ans.push_back(path_ans);
                path_ans = intervals[i];
            } else {
                path_ans[1] = max(intervals[i][1], path_ans[1]);
            }
        }
        ans.push_back(path_ans);
        return ans;
    }
};
