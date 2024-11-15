/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */


class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(const auto& el : nestedList) {
            ProcessList(el, vec);
        }
    }
    
    int next() {
        return vec[iter++];
    }
    
    bool hasNext() {
        return iter < vec.size();
    }
private:
    vector<int> vec;
    int iter = 0;

    void ProcessList(const NestedInteger& list, vector<int>& normList) {
        if (list.isInteger()) {
            normList.push_back(list.getInteger());
        } else {
            for (const auto& el : list.getList())
                ProcessList(el, normList);
        }
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */