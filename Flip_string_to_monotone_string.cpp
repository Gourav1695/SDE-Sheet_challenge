class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n= s.length();
        int countZero= count(s.begin(),s.end(),'0');
        int minFlip=n-countZero;
        int countOne=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                 countZero--;

            }
            else if(s[i]=='1'){
                minFlip=min(minFlip,countZero+countOne);
                countOne++;
            }
        }
        return minFlip;
    }
};
