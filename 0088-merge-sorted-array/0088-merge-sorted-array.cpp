class Solution {
public:
    void merge(vector<int>& numsM, int m, vector<int>& numsN, int n) {
        int pm = m-1;
        int pn = n-1;
        int mp = m+n-1;

        while (mp >= 0) {
            if (pn < 0) {
                numsM[mp--] = numsM[pm--];
                continue;
            }
            if (pm < 0) {
                numsM[mp--] = numsN[pn--];
                continue;
            }
            if (numsN[pn] > numsM[pm]) {
                numsM[mp--] = numsN[pn--];
            } else { // numsN[pn] <= numsM[pm]
                numsM[mp--] = numsM[pm--];
            }
        }
        return;
    }
};