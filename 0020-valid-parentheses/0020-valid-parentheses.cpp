
class Solution {
public: 
    bool isValid(string s) {
    int n=0;for(int c:s)n&&(c-s[n-1]+1)/2==1?n--:s[n++]=c;return!n;
}
};