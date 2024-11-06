class Solution {
public:
    bool help(const string& s, int i, int j) {
        while(i < j) {
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        for (int i = 0, j = s.size()-1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                return help(s, i+1, j) || help(s, i, j-1);
            }
        }

        return true;
    }
};

