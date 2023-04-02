class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int res=0;
        string temp="01";
        while(temp.size()<=s.size()){
        if(s.find(temp)!=string::npos){ //string::npos is a special value used to indicate that a string operation has failed to find a specific substring or character.
            res=temp.size();
           
        }
             temp="0"+temp+"1";
        }
        return res;
    }
};
