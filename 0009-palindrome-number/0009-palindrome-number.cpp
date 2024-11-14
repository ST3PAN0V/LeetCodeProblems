class Solution {
public:
    int isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        string ans = "";
        int n = 0, constN=0;
        while (x)
        {
            ans += (x%10)+'0';
            x /= 10;
            n++;
        }
        constN = n;
        while (n/2)
        {
            n--;
            if (ans[n] != ans[constN-n-1]) return false;
        }
        return true;
    }
};