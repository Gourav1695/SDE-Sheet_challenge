#include <bits/stdc++.h>
using namespace std;
void Gourav()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int flag = 0;
    for (int i = 0; i < n; ++i)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
       else {
        if(s[i] == '1'){
        if (st.top() == '1')
        {
            cout << '1' << endl;
            flag = 1;
            break;
        }
        else
        {
            st.push(s[i]);
        }
        }
        else  {
            if(st.top()=='0')
            st.pop();
            else
            st.push(s[i]);
     
            }
      
       }
    }

    if (!flag)
    {
        cout << '2' << endl;
    }
}

int main()
{

    long long t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case#i: ";
        Gourav();
    }
    return 0;
}
