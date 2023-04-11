class Solution {
public:
      stack<char>st;
    string removeStars(string s) {
        string ans="";
          
      for(auto it: s){
          if(it!='*'){
              st.push(it);
          }
          else if(st.empty()!=true){
              st.pop();
          }     
      }  
      while(st.empty()!=true){
        
          ans+=st.top();
          st.pop();
      }

   reverse(ans.begin(),ans.end());
      return ans;
    }
};
