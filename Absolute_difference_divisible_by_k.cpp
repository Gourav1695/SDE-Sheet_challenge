#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
     long long coutPairs(int n, int arr[],int k){
        long long ans=0;
        // brute force -> Tc ->O(n^2),sc->O(1)
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((arr[i]-arr[j])%k==0){
        //             ans++;

        //         }
        //     }
        // }
        unordered_map<int,int >mp;// usign urordered map tc -> O(n+k),sc-> O(k)
        for(int i=0; i<n;++i){
            arr[i]=arr[i]%k;
            mp[arr[i]]++;
        }
        for(int i=0; i<k;++i){
            int x= mp[i];
            ans= ans+x*(x-1)/2;

        }
        return ans;
     }
};
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin>>arr[i];
        cin>>k;
        Solution ob;
        cout<<ob.coutPairs(n,arr,k)<<endl;
    }
    return 0;
}
