class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)  {
        stack<int>st;
        int j=0;
        for(auto it: pushed){
            st.push(it);
            while(st.size()>0 && st.top()==popped[j]){
                st.pop();
                j++;

            }
        }
        return st.empty()==true;
    }
};

// time complexity -> O(N) , N is the size of stack pushed
// space complexicity -> O(N), N is the size of stack pushed as we are using extra space
