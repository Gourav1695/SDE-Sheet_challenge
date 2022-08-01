    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
     
    int main() {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
     
        ll t;
        cin >> t;
     
        while(t--){
          ll n,m;
          cin >> n >> m;
     
          vector<ll> arr(n);
          for(ll i=0; i<n; i++)
          cin >> arr[i];
     
          vector<char> ans(m,'B');
     
          for(ll i=0; i<n; i++){
            ll temp = min(arr[i]-1, m+1-arr[i]-1);
            if(ans[temp] == 'B')
            ans[temp]='A';
            else
            ans[max(arr[i]-1, m+1-arr[i]-1)]='A';
          }
          for(ll i=0; i<m; i++)
          cout << ans[i];
          cout << "\n";
        }
      return 0;
    }
