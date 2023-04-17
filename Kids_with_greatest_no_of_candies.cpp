class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>vec;
            int kid_greatest=0;
        
        for(int i=0; i<candies.size();i++){
             kid_greatest=candies[i]+extraCandies;
            // cout<<kid_greatest<<endl;
            bool flag=false;
            for(int j=0; j<candies.size();j++){
                cout<<kid_greatest<<" ";
                if(kid_greatest<candies[j]){
                    flag=false;
                    break;
                }
                else{
                    flag=true;
                }

            }
            if(flag==true){
                vec.push_back(true);
            }
            else{
                vec.push_back(false);
            }
        }
        return vec;
    }
};

// time complexicity is O(N^2), where N is the no. of elements in the candies vector
// space complexicity is O(N), as I am using extra vector to store the true and false;
