class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int sz = s.size();
        for (size_t i = 0; i<sz; ++i)
        {
            string curans;
            int left = i;
            int right = i;
            while(left != -1 && right != sz)
            {
                if (s[left] == s[right])
                {
                    if (left == right) curans += s[left];
                    else
                    {
                        curans += s[right];
                        curans = s[left] + curans;
                    }
                    left--;
                    right++;
                }
                else break;
            }
            ans = ans.size() < curans.size() ? curans : ans;
            curans = "";
            left = i;
            right = i+1;
            while(left != -1 && right != sz)
            {
                if (s[left] == s[right])
                {
                    curans += s[right];
                    curans = s[left] + curans;
                    left--;
                    right++;
                }
                else break;
            }
            ans = ans.size() < curans.size() ? curans : ans;
        }
        return ans;
    }
};