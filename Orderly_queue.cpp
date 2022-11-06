class Solution {
public:
    string orderlyQueue(string s, int k) {
       if(k==1){
        int n= s.size();
        string answer = s;
        string doubleString= s+s;
        for(int i=1; i<n;i++)
        {
            string st = doubleString.substr(i,n);
            if(st<answer)
            answer = st;
            
        }
        return answer;
        

       }
       else {
           sort(s.begin(),s.end());
           return s;
       }
        
    }
};
