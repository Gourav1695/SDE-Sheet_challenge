class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>vec(candies.size());

        int max_element=candies[0];
        for(int i=1;i<candies.size();i++ ){
            max_element=max(max_element, candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max_element){
                vec[i]=true;
            }
            else{
                vec[i]=false;
            }
        }
        return vec;
    }
};

// Tc --> O(N),where N is no. of elements in the candies vector.
// Sc --> O(N)
