class Solution {
public:
    bool isValid(string s) {
        stack<char >t;
        for(auto i: s)
        {
            if(i=='('||i=='{'||i=='[')
            {
                t.push(i);
            }
            else 
            {
                if(t.empty()||(t.top()=='('&& i!=')'||t.top()=='{'&& i!='}'||t.top()=='['&& i!=']'))
                {
                    return false;
                }
            
                t.pop();
            }
            
        }
        return t.empty();
        
    }
    
};
