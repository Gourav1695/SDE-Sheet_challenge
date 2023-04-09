class Solution {
public:
    int dfs(vector<int> g[], int i, string& c, unordered_set<int>&s, char ch, unordered_map<int,int> &m){
        if(s.find(i)!=s.end())
            return -1;
        s.insert(i);
          
        int ans=0;
        for(auto v: g[i]){
            if(m.find(v)==m.end()){
                
               int t =  dfs(g, v, c,s, ch, m);
                if(t==-1) return -1;
               ans = max(t,ans);
            }
             ans= max(ans, m[v]);
        }
        m[i]= ch==c[i]? ans+1:ans; 
        return m[i];
    }
    
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n= colors.length();
        vector<int> g[n];
        for(auto e: edges){
            g[e[0]].push_back(e[1]);
        }
        int a1=0;
        unordered_set<int> s;
        unordered_map<int,int> m;
        for(int j=0;j<26;j++){           
            for(int i=0;i<n;i++){
                    if(m.find(i)==m.end()){
                    
                    int t= dfs(g,i, colors, s, 'a'+j, m);    
                    if(t==-1) return -1;
                    a1=max(t,a1);
                        s.clear();
                }      
                m.clear();
                
            }
        }
        return a1;
        
    }
};
