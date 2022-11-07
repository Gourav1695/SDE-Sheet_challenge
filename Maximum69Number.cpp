#include <bits/stdc++.h>
using namespace std;


    int maximum69Number (int num) {
        string str = to_string(num);
        for(int i=0; i<str.length();i++)
        {
            if(str[i]=='6')
            {
                str[i]='9';
                break;
            }
        }
        int j=stoi(str);
        cout<<j<<endl;
        return j;
    }

int main(){
    maximum69Number(9669);
    return 0;
}
