#include <iostream>
#include<math.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    // base case 
    if(n==0)
     return 0;
    if(n<=-1)
     return -1;
     
     int res= max(maxPieces(n-a, a, b, c),max( maxPieces(n-b, a, b,c), maxPieces(n-c, a, b, c)));
     if(res==-1)
     return -1;
     
     return res+1;
}
int main() {
    int n=23;
    int a=11;
    int b=9;
    int c=12;
    cout<<maxPieces(n, a, b,c);
	return 0;
}
