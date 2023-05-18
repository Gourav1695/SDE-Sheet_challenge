class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> isedgecoming(n,false);
        for(auto &it: edges){
            isedgecoming[it[1]]=true;
        }
   

    vector<int>res;
    for(int i=0;i<n;i++){
        if(isedgecoming[i]==false){
            res.push_back(i);
        }
    }
    return res;
     }
};
