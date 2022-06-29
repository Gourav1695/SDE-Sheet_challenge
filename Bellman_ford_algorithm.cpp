class soultion
{
  public:

vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {

vector <int> bellman_ford(int V,vector<vector<int>>adj,int S)
 {
    vector<int>distance(V,1e8);
    distance[S]=0;
    
    for(int i=0;i<V-1;i++)
    {
        for(auto u:adj)
        {
            if(distance[u[0]]+u[2]<distance[u[1]])
              {
                   distance[u[1]]=distance[u[0]]+u[2];
              }
        }
    }
    return distance;
 }
};
