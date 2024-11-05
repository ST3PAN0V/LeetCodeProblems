class Solution {
    void help(vector<string>& ans, string str, int open, int close, int n) {
        if (close == n) {
            ans.push_back(str);
            return;
        }
        cout << str << endl;
        if(open >= close) {
            if (open < n) help(ans, str+'(', open + 1, close, n);
            if (open != close) help(ans, str+')', open, close + 1, n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        help(ans, "(", 1, 0, n);
        return ans;
    }
};
