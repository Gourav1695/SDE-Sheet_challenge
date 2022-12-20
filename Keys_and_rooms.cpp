class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        vector<bool>visited(rooms.size(),false);
        int n= rooms[0].size();
        for(int i=0;i<n;i++)
        {
            q.push(rooms[0][i]);
        }
        //rooms->[[1,3],[3,0,1],[2],[0]]
        //q->1 3 3 1
        //q-> 3 3 1
        //q->  3 1
        //q->   1


        //visited -> t f f f
        //visited -> t t f f
        //visited -> t t f t


        visited[0]=true;
        while(!q.empty())
        {
            int x=  q.front();//1->3->3->1
            if(!visited[x])
            {
                int N=rooms[x].size();//3->1
                for(int i=0;i<N;i++)
                {
                    if(!visited[rooms[x][i]])
                    q.push(rooms[x][i]);//3
                }
                visited[x]=true;
            }
            q.pop();


        }
        for(int i=0;i<visited.size();i++){
            if(!visited[i])return false;
        }

    return true;
    }
};
