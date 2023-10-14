//{ Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.

void permute(string &str,vector<string>&res, int i)
{
    // vector<string>vec;
    if(i==str.length()-1)
    {
        res.push_back(str);
        return ;
    }
    else
    {
        for(int k= i; k<=str.length()-1;k++)
        {
            swap(str[i],str[k]);
            permute(str,res, i+1);
            swap(str[i], str[k]);
        }
    }
}

vector <string> powerSet(string s)
{
   //Your code here
   vector<string>res;
   permute(s, res, 0);
   return res;
}


//{ Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
} 
// } Driver Code Ends
