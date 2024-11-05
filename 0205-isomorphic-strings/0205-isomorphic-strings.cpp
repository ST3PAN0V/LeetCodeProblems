class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int szS = s.size();
        int szT = t.size();

        unordered_map<char, int> mpS;
        unordered_map<char, int> mpT;
        if (szT != szS) return false;
        for (int i = 0; i < szT; i++) {
            if (mpS.find(s[i]) == mpS.end())  mpS[s[i]] = i;
            if (mpT.find(t[i]) == mpT.end())  mpT[t[i]] = i;
            if (mpT[t[i]] != mpS[s[i]]) return false;
        }
        return true;
    }
};