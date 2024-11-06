class ATM {
    vector<int> depos;
    vector<int> bank = {20,50,100,200,500};
public:
    ATM() {
        for (int i = 0; i < 5; i++) {
            depos.push_back(0);
        }
    }
    
    void deposit(vector<int> banknotesCount) {
        for (int i = 0; i < 5; i++) {
            depos[i] += banknotesCount[i];
        }
    }
    
    vector<int> withdraw(int amount) {
        vector<int> ans(5);
        vector<int> cop = depos;
        int tmp;
        for (int i = 4; i >= 0; i--) {
            tmp = min(amount/bank[i], cop[i]);
            cop[i] -=  tmp;
            ans[i] = tmp;
            amount -= bank[i]*tmp;
        }
        if (amount > 0) return {-1};
        depos = cop;
        return ans;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */