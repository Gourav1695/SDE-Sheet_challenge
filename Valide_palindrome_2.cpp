#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrom(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s)
    {

        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                return isPalindrom(s, i + 1, j) || isPalindrom(s, i,j - 1);
            }
        }
        return true;
    }
};

int main()
{
    string str;
    cin >> str;
    Solution obj;
    cout<<obj.validPalindrome(str);
    return 0;
}



/*The time complexity of this program is O(n), 
where n is the length of the input string s. This is because
the program only iterates over the string s once using two pointers
(i and j), and performs constant time operations
(comparing characters, incrementing/decrementing pointers, 
and calling the isPalindrom() function) for each character in the string.

The space complexity of this program is O(1), 
which means it uses constant space. This is because the 
program only uses a few constant space variables (i, j, and the 
return value of the isPalindrom() function), and the space used by these
variables does not depend on the size of the input string. 
Therefore, the program uses a constant amount of space regardless
of the input size.*/
