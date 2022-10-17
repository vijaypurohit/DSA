/*
https://leetcode.com/problems/flatten-nested-list-iterator/
*/
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

/*
// Copies the list to stack data structure
class NestedIterator { 
    stack<int> st;
    void dfs(vector<NestedInteger> &nestedList)
    {
        for(int i=nestedList.size()-1; i>=0; i--)
        {
            if(nestedList[i].isInteger())
                st.push(nestedList[i].getInteger());
            else
                dfs(nestedList[i].getList());
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) { 
        dfs(nestedList);
    }
    
    int next() {
        int val = st.top(); st.pop();
        return val;
    }
    
    bool hasNext() {
        return st.empty()==false;
    }
};
*/
/*
class NestedIterator {
    stack<NestedInteger*> st;
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i=nestedList.size()-1; i>=0; i--)
            st.push(&nestedList[i]);
    }
    
    int next() {
        int val = st.top()->getInteger();
        st.pop();
        return val;
    }
    
    bool hasNext() {
        while(!st.empty())
        {
            NestedInteger* p = st.top();
            if(p->isInteger()) return 1;
            vector<NestedInteger> &v = p->getList();
            st.pop();
            for(int i=v.size()-1; i>=0; i--)
                st.push(&v[i]);
        }
        return 0;
    }
};
*/
class NestedIterator { 
    stack< vector<NestedInteger>::iterator> stfst, stlst;
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
         stfst.push(nestedList.begin());
         stlst.push(nestedList.end());
    }
    
    int next() {
        int val = stfst.top()->getInteger();
        stfst.top()++;
        return val;
    }
    
    bool hasNext() {
        while(!stfst.empty())
        {
            auto it = stfst.top();
            if(it == stlst.top())
            {
                stfst.pop();
                stlst.pop();
                if(!stfst.empty()) stfst.top()++;
            }
            else if(it->isInteger())
                return true;
            else{
                vector<NestedInteger> &lst = it->getList();
                stfst.push(lst.begin());
                stlst.push(lst.end());
            }
        }
        return false;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */