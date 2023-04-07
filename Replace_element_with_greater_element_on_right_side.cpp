class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size()-1;
        vector<int>vec(arr.size());
        if (arr.size()==1){
            vec.clear();
            vec.push_back(-1);
            return vec;
        } 
        else if(arr.size()==2){
            vec.clear();
            vec.push_back(arr[n]);
            vec.push_back(-1);
        }
        else{
        vec[n]=-1;
        vec[n-1]=arr[n];
        vec[n-2]=max(arr[n], arr[n-1]);
        for(int i=n-3; i>=0; i--){
            vec[i]=max(vec[i+1], arr[i+1]);
            }
        }
        return vec; 
    }
};

// TC -> O(N), where N is the number of element of arr vector
// sc -> O(N), as we are using extra vec vector to store the result

