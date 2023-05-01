class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0;
        int a= *max_element(salary.begin(),salary.end());
        int b= *min_element(salary.begin(),salary.end());
       for(auto it: salary){
            sum=it+sum;
       }
       return (double)(sum-(a+b))/((double)salary.size()-2);
    }
};

//tc -> O(N);
//sc -> O(1);
