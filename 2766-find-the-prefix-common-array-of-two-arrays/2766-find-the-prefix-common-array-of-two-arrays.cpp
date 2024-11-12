class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int gensz = A.size();
        unordered_map<int,bool> mpA;
        unordered_map<int,bool> mpB;
        vector<int> ans(gensz);
        for (int i = 0; i < gensz; i++) {
            mpA[A[i]] = true;
            mpB[B[i]] = true;
            int counter = 0;
            for (auto el : mpA) {
                if (mpB.find(el.first) != mpB.end()) counter++;
            }
            ans[i] = counter;
        }

        return ans;
    }
};
