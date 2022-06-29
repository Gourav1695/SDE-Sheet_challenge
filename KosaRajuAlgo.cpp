class Solution
{
public:
    void dfs(int node,vector<int >adj[],vector<int>&vis, stack<int >&st ){
        vis[node]=1;
        for(auto it: adj[node]){
            if(vis[it]==0){
                dfs(it,adj,vis,st);
                
            }
        }
        st.push(node);
        
    }
void revDfs(int node, vector<int> &vis, vector<int> transpose[]) {
  
    vis[node] = 1; 
    for(auto it: transpose[node]) {
        if(!vis[it]) {
            revDfs(it, vis, transpose); 
        }
    }
}
int kosaraju(int n, vector<int >adj[]){
 stack<int> st;
	vector<int> vis(n, 0); 
	for(int i = 0;i<n;i++) {
	    if(!vis[i]) {
	        dfs(i,adj, vis, st); 
	    }
	} 
	
	vector<int> transpose[n]; 
	
	for(int i = 0;i<n;i++) {
	    vis[i] = 0;
	    for(auto it: adj[i]) {
	        transpose[it].push_back(i); 
	    }
	}
	
	
	int count=0;
	while(!st.empty()) {
	    int node = st.top();
	    st.pop(); 
	    if(!vis[node]) {
	       
	        revDfs(node, vis, transpose); 
	        count++;
	        
	    }
	}
	return count;   
    
  }   
    
    
};
    
