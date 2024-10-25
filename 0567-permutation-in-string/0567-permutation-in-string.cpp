class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sz1 = s1.size();
        int sz2  = s2.size();

        if (sz1 > sz2) return false;

        unordered_map<int, int> mp;

        for (int i = 0; i < sz1; i++) {
            mp[s1[i]]++;
        }
        int r = 0;
        int l = 0;
        int need = sz1;
        while(r<sz1) {
            if (mp[s2[r]] > 0) need--;
            mp[s2[r++]]--;
        }
        if (need == 0) return true;

        while(r<sz2) {
            if (mp[s2[l]] >= 0) need++;
            mp[s2[l++]]++;
            if (mp[s2[r]] > 0) need--;
            mp[s2[r++]]--;
            if (need == 0) return true;
        }
        return false;
    } 
};