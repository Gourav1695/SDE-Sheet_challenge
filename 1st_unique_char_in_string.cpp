class Solution {
    public: 
        int firstUniqChar(string s){
            int n=s.length();
            vector<int>frequency(26,0);
            //Store frequency of all characters
            for (int i=0;s[i]!='\0';++i)
                frequency [s[i]-'a']+=1;
            //Now traverse and find the first non repeating char 
            for( int i=0; s[i]!='\0';++i)
                if(frequency [s[i]-'a']==1)
                    return i;
            return -1; //All chars are repeoating 
        }
};
