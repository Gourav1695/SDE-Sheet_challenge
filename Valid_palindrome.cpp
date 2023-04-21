
class Solution {
public:
    // Iterate through the string and only add alphanumeric characters to new string

bool isPalindrome(string s) {
    string str = "";
         for (char c : s) {
        if (isalnum(c)) {
            c=toupper(c);
            cout<<c;
            str += c;

        }
    }
        int i=0, j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;

        }
        return true;

    }
};

/*The time complexity of this function is O(n), where n is the length of the input 
string s. This is because the function iterates over each character in the string once 
and performs constant time operations (such as checking if a character is alphanumeric,
converting it to uppercase, and appending it to a new string).


The space complexity is also O(n), where n is the length of the input string s.
This is because the function creates a new string str that may be as long as the
input string s (if all characters are alphanumeric), and the function also uses two
integer variables i and j to track the indices of the two ends
of the string during the palindrome check, which requires constant space. Overall, the function's space complexity is linear in the size of the input string.*/
