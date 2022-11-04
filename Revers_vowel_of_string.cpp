// Time Complexity: O(N)
// Space Complexity: O(1)
class Solution {
public:
    // fun fact: 
    // `Y` and `y` can be a vowel as well. 
    // glad the problem statement defines it well
    bool isVowel(char c) {
        // alternatively, we can just check 
        // return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
        //        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    string reverseVowels(string s) {
        // `l` is the left pointer to track the vowel character
        // `r` is the right pointer to track the vowel character
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            // find the index of the first vowel in the given range
            // alternatively, we can use STL library `find_first_of` in c++
            while (l < r && !isVowel(s[l])) l++;
            // find the index of last vowel in the given range
            // alternatively, we can use STL library `find_last_of` in c++
            while (r > l && !isVowel(s[r])) r--;
            // we can swap two vowels only when l < r
            swap(s[l], s[r]);
            // since we've processed the character s[l],
            // we move the left pointer to the right
            l += 1;
            // since we've processed the character s[r],
            // we move the right pointer to the left
            r -= 1;
        }
        return s;
    }
};
