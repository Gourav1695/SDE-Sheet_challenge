// CPP program to replace c1 with c2
// and c2 with c1
#include <bits/stdc++.h>
using namespace std;
string replace(string s, char A, char T, char C, char G)
{
    int l = s.length();

    // loop to traverse in the string
    for (int i = 0; i < l; i++)
    {

        // check for c1 and replace
        if (s[i] == A)
            s[i] = T;

        // check for c2 and replace
        else if (s[i] == T)
            s[i] = A;
        if (s[i] == C)
            s[i] = G;

        // check for c2 and replace
        else if (s[i] == G)
            s[i] = C;
    }
    return s;
}

// Driver code to check the above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // char s[n];
        string s;
        cin>>s;
        // char A, C, T, G;
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> s[i];
        // }
        // string s = "ATTACGGC";
        char c1 = 'A', c2 = 'T', c3 = 'C', c4 = 'G';
        cout << replace(s, c1, c2, c3, c4) << endl;
    }
    return 0;
}
