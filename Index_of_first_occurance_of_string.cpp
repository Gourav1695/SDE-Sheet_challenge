class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        int m= haystack.size(),n=needle.size();
        for(int i=0;i<=m-n;i++)
        {
            int j=0;
            for(;j<n;j++)
            {
                if(haystack[i+j]!=needle[j]){
                    break;                }
            }
            if(j==n)
        {
            return i;
            
        }
    }
        return -1;
        
    }
    
};
// class Solution {
// public:
// 	int strStr(string haystack, string needle) {
// 		int needle_len = needle.length();
// 		int haystack_len = haystack.length();
// 		if(needle_len==0){
// 			return 0;
// 		}
// 		int j = 0;
// 		for(int i = 0 ; i < haystack_len ; i++){

// 			if(haystack[i] == needle[j]){
// 				j++;
// 			}else{
// 				i = i-j;
// 				j = 0;
// 			}
// 			if(j==needle_len){
// 				return i - j +1 ;
// 			}

// 		}
// 		return -1;
// 	}
// };
