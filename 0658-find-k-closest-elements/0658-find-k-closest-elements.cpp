class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>> ans(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            ans[i] = make_pair(abs(arr[i] - x), i);
        }
        sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            if (a.first != b.first) return a.first < b.first;
            else return a.second < b.second;
        });
        ans.resize(k);
        sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second < b.second;
        });
        vector<int> ans1(k);
        for (int i = 0; i < k; i++) {
            ans1[i] = arr[ans[i].second];
        }
        return ans1;
    }
};