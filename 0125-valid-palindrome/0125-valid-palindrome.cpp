class Solution {
public:
    bool isPalindrome(string s) {
        string prep = "";
        for (char i : s) {
            if (isalpha(i) || isdigit(i)) {
                prep += tolower(i);
            }
        }
        int sz = prep.size();
        if (sz <= 1) return true;
        bool flag = true;
        for (int i = 0; i <= sz/2; i++) {
            if (prep[i] != prep[sz-1-i]) flag = false;
        }
        return flag;
    }
};