#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        ll x,y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        ll sum=0;
        ll nega=0;
        vector<ll> mp(n+1,0);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum+=a[j];

        }
        int c=0;

        // for (int j = 0; j < n; j++) {
        //     for(int k = j+1; k < n; k++){
        //         if (sum-a[j]-a[k] >= x && sum-a[j]-a[k] <= y){
        //             c++;
        //         }
        

                
        // }}

       
cout<<c<<endl;
  
    }

    return 0;
}
