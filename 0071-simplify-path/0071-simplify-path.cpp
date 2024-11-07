class Solution {
public:
    string simplifyPath(string path) {
        path += '/';
        vector<string> dirs;
        string piece;
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (piece == "..") {
                    if (!dirs.empty()) dirs.pop_back();
                } else {
                    if (piece != "." && piece != "") dirs.push_back(piece);
                }
                piece = "";
            } else {
                piece += path[i];
            }
        }
        string ans;
        for (const string& dir : dirs) {
            ans +="/" + dir;
        }
        ans = ans.size() > 1 ? ans : "/";
        return ans;
    }
};