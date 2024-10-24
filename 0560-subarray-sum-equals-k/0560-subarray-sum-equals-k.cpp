class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]++;
        int sz = nums.size();
        int summ = 0;
        int ans = 0;
        for (int i = 0; i < sz; i++) {
            summ += nums[i];
            if (mp.find(summ-k) != mp.end()) ans += mp[summ-k];
            mp[summ]++;
        }
        return ans;
    }
};