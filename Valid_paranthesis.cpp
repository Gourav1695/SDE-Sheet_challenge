class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it :s){
            if(it=='('||it=='{'||it=='['){
            st.push(it);
            }
            else{
                if(st.empty()==true||st.top()=='('&& it!=')'||st.top()=='{'&& it!='}'||st.top()=='['&& it!=']')
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

// tc -> O(N), where N is the size of the string
// sc -> O(N), where N is the size of the string
// The time complexity of this function is O(N),
// where N is the size of the input string. This is because the function 
// iterates over each character in the string exactly once,
// performing constant-time operations (pushing or popping from a stack) 
//   on each character. Therefore, the total time complexity of the function
//   is proportional to the size of the input string.

// The space complexity of the function is also O(N), 
// where N is the size of the input string. This is because the
// function uses a stack to keep track of the opening brackets it 
// encounters in the string. The maximum size of the stack will be
// proportional to the number of opening brackets in the string, 
// which is at most N/2 (if the string consists entirely of opening brackets). 
//   Therefore, the space used by the stack will also be proportional to N.
