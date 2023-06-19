class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hp=0;
        int cg=hp;
        for(auto at: gain){
          cg+=at;
          hp=max(cg,hp);
        }
        return hp;
    }
};
