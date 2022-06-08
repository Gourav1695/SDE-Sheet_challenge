class Solution {

   public int removePalindromeSub(String s) {
        if ( s.length()==0)
            return 0;
        for( int i=0, j=s.length()-1; i<j;i++,j--)
            if ( s.charAt(i)!= s.charAt(j))
                return 2;
            return 1;
    }
};
