
class Solution {
public:
    unordered_map<string,bool> hash;
    bool isScramble(string s1, string s2) {
        if(s1.size()!=s2.size()){
            return false;
        }
        if(s1==s2){
            return true;
        }
        if(hash.find(s1+s2)!=hash.end()){
            return hash[s1+s2];
        }
        bool res=false;
        vector<int> v(26,0);
        for(int i=0;i<s1.size();i++){
            v[s1[i]-'a']++;
            v[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0){
                return hash[s1+s2]=false;
            }
        }
        for(int i=1;i<s1.size();i++){
            res=res || (isScramble(s1.substr(0,i),s2.substr(0,i)) && isScramble(s1.substr(i),s2.substr(i)));
            res=res || (isScramble(s1.substr(0,i),s2.substr(s1.size()-i))&& isScramble(s1.substr(i),s2.substr(0,s1.size()-i)));
        }
        return hash[s1+s2]=res;
    }
    
}; 
