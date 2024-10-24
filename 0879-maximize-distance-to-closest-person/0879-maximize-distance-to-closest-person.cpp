class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int counter = 0;
        int ans = 1;
        bool first = true;
        for (int i = 0; i < seats.size(); i++) {
            if (seats[i] == 1) {
                if (first) {
                    ans = max(ans, counter);
                    first = false;
                } else {
                    ans = max(ans, counter % 2 != 0 ? counter/2+1 : counter/2);
                }
                counter = 0;
            }
            else {
                counter++;
            }
        }
        ans = max(ans, counter);
        return ans;
    }
};