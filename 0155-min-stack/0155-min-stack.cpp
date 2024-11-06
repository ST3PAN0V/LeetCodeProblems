class MinStack {
public:
    MinStack() {}
    
    void push(int val) {
        if (nums.empty()) nums.emplace_back(val, val);
        else {
            if (nums[nums.size()-1].second <= val) nums.emplace_back(val, nums[nums.size()-1].second);
            else nums.emplace_back(val, val);
        }
    }
    
    void pop() {
        nums.resize(nums.size()-1);
    }
    
    int top() {
        return nums[nums.size()-1].first;
    }
    
    int getMin() {
        return nums[nums.size()-1].second;
    }
private:
    vector<pair<int,int>> nums;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


