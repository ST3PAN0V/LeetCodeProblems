class RecentCounter {
    deque<int> dq;
public:
    RecentCounter() {
    }
    
    int ping(int t) {
        dq.push_back(t);
        while(dq.front() < t-3000) {
            dq.pop_front();
        }
        return dq.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */