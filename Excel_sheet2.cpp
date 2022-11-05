#include <bits/stdc++.h>
using namespace std;
string FindExcelColumnName(int n) {
    string s;
    while(n) {
        n--;
        s.push_back('A' + n % 26);
        n /= 26;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<FindExcelColumnName(n);
    return 0;
}
