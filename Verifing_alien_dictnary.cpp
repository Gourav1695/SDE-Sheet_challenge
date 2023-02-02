class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int j=0;j<words.size()-1;j++){
            string w1=words[j];
            string w2=words[j+1];
        int n=min(words[j].size(),words[j+1].size());
        for(int i=0; i<n;i++){
            if(mp[w1[i]]<mp[w2[i]]){
                break;
            }
            if(mp[w1[i]]>mp[w2[i]]){
                return false;
            }
            if((i==n-1)&&(w1.size()>w2.size())){
                return false;
            }
        }
        }
        return true;
    }
};
