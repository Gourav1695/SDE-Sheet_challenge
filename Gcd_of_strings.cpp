class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        	if (str1.length() < str2.length())
	{
		return gcdOfStrings(str2, str1);
	}

	// If str1 is not the
	// concatenation of str2
	else if(str1.find(str2) != 0)
	{
		return "";
	}
	else if (str2 == "")
	{
	
		// GCD string is found
		return str1;
	}
	else
	{
	
		// Cut off the common prefix
		// part of str1 & then recur
		return gcdOfStrings(str1.substr(str2.length()), str2);
	}

    }
};
