#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
#define endl '\n'
#define ll long long 
int main(){
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr); // Untie cin from cout for further performance improvement
    cout.tie(nullptr); // Untie cout from cin for further performance improvement
       ll n,q;
        cin>>n>>q;
        ll res=0;
        vector<ll> a(n);
        vector <ll>freq(n+1,0);

         for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<q;i++){
            ll l,r;
            cin>>l>>r;
             freq[l - 1]++; // Increment at the start
        if (r < n) freq[r]--; // Decrement after the end
        }

        // prefix sum 
        for (int j =1;j<n;j++){
            freq[j]+=freq[j-1];
        }
        freq.pop_back();
        

        sort(freq.begin(),freq.end(),greater<ll>());
        sort(a.begin(),a.end(),greater<ll>());

        for(int i;i<n;i++){
            res+=freq[i]*a[i];
        }
cout<<res<<endl;



     return 0;
}
