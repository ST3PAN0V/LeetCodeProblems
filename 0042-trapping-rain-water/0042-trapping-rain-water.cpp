class Solution {
public:
    int findIndxMaxTop(vector<int>& height) {
        int ans = 0;
        for (int i = 0; i < height.size(); i++) {
            ans = height[ans] < height[i] ? i : ans;
        }
        return ans;
    }
    int helper(vector<int>& height, int stop) {
        int ans = 0;
        int max = 0;
        for (int i = 0; i < stop; i++) {
            if (max < height[i]) {
                max = height[i];
            } else ans += max - height[i];
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int max_top = findIndxMaxTop(height);
        int ans = helper(height, max_top);
        reverse(height.begin(), height.end());
        max_top = height.size() - max_top;
        ans += helper(height, max_top);
        return ans;
    }
};
