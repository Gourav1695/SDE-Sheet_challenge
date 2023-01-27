#include <bits/stdc++.h>
using namespace std;

// no of trees -> M
long long n;
// here n is the no. of trees 
const long long N =1e6+10;// N is the num. of trees
long long M;// wood required
long long tree[N];
bool isWoodSufficent(long long h){
    long long w=0;
    for(int i=0; i<n;++i){
        if(tree[i]>=h){
        w=w+(tree[i]-h);
        }
    }
    return w>=M;   
    // if (w>=M){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}
// predicate function
// FFFFFTTTTT
// OR TTTTTFFFF MEANS monotonic incresing of decresing



int main(){
    cin>>n>>M;
    for(int i=0; i<n;++i){
        cin>>tree[i];
    }
    long long lo=0, hi=1e9;
    long long mid;
    while(hi-lo>1){
        mid= (lo+hi)/2;
        if(isWoodSufficent(mid)){
            lo= mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(isWoodSufficent(hi))
    {
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
    return 0;
}
