bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()==1){
            if(str1[0]==str2[0]){
                return true;
            }
            else {
                return false;
            }
        }
        if(str1.length()==2){
            if(str1[0]==str2[0] && str2[1]==str1[1])
            {
                return true;
            }
            else{
                return false;
            }
        }
        if(str1.length()!=str2.length())
        {
            return false;
        }
          int n= str1.length();
        str1=str1+str1;
        int found= str1.find(str2);// find() is O(n) time complexity so TC -> O(n) and SC-> O(1)
        if(found==2||found==n-2)
            return true;
        
        
        return false;
    
    }
