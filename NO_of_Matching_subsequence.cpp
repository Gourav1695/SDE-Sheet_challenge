class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
//         we should use here the map data structure
        map<char, vector<int >>m;
        //x is character
        int i=0;
        for(auto x: s){
            m[x].push_back(i++);
        }
        int count=0;
        for(int i= 0;i<words.size();i++)
        {
            string curr=words[i];
            int latest=-1;
            for(int j=0; j<curr.size(); j++)
            {
                auto it= upper_bound(m[curr[j]].begin(), m[curr[j]].end(),latest);//curr[j]-->is a key and m[curr[j]] is the vector
                    if(it==m[curr[j]].end()) break;
                latest= *it;
                
                if(j==curr.size()-1) count++;
            }
            
        }
        return count;
    }
};
