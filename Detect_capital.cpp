class Solution {
public:
    bool detectCapitalUse(string word) {
        int len= word.length();
        int smallc=0;
        int capitalc=0;
        for(int i=1;i<len;i++){
            if(word[i]>='a' && word[i]<='z')
            {
                smallc++;

            }
              if(word[i]>='A' && word[i]<='Z')
            {
                capitalc++;

            }
            
        }
        if(word[0]>='a'&& word[0]<='z')
            {
            return (!capitalc);
            }
            if(word[0]>='A'&& word[0]<='Z')
            {
                if(capitalc==0 || smallc==0)
                {
                    return true;
                }
                else 
                return false;
            }
            return false;
    }
};
