#include <bits/stdc++.h>
using namespace std;

bool fun(int i,string &s){
    if(i>=s.size()/2) return true;
    if (s[i]!= s[s.size()-i-1])
    {
        return false;
    }
    else{
        return fun(i+1, s);
    }
   
}

int main(){
    string s="madam";
   cout<< fun(0, s);
    return 0;
}//second way of doing reverse the array by recusion :) 
