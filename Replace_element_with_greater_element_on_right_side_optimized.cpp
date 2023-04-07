class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size();
        int max_so_far=-1;
        for(int i=n-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=max_so_far;
            max_so_far= max(max_so_far, temp);
        }
        return arr;
    }
};

// tc -> O(N)
// sc -> O(1)
