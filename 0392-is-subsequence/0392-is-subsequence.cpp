class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ps = 0;
        int pt = 0;
        while (pt < t.size() && ps < s.size()) {
            if (s[ps] == t[pt]) ps++;
            pt++;
        }
        if (ps == s.size()) return true;
        else return false;
    }
};