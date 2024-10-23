class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool flag = true;
        int list1=0;
        int list2=0;
        int counter=0;
        int ans=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (flag) {
                    list1 = counter;
                    counter = 0;
                    flag = false;
                } else {
                    list2 = counter;
                    counter = 0;
                    ans = max(list2+list1, ans);
                    list1 = list2;
                    list2 = 0;
                }
            } else {
                counter++;
            }
        }
        if (flag) return nums.size()-1;
        return max(ans, list1+counter);
    }
};