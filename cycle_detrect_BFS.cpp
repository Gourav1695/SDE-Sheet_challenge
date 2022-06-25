bool checkForCycle(int s, int V, vector<int >adj[], vector<int >&visited)
    {
        queue<pair<int, int >>q;
        visited[s]=true;
        q.push({s,-1});
        
        while(!q.empty()){
            int node=q.front().first;
            int par = q.front().second;
            q.pop();
            
            for(auto it: adj [node]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push({it, node});
                    
                }
                else if (par!= it && visited[it]==1)
                return true;
            }
        }
        return false;
    }
   
   public:
    // Function to detect cycle in a directed graph.
    bool isCycle(int V, vector<int> adj[]) {
        // code here
        vector <int >vis(V+1,0);
        for (int i=0; i<V;i++){
        if (!vis[i]){
            if(checkForCycle(i,V, adj,vis)) return true;
        }    
        }
        return false;
            
        
    }
};
