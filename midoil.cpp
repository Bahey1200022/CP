#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool check(ll mid, ll n, int k){
    ll sum=0;
    int power=0;
    while (floor(mid*(1/pow(k,power))) >0){
        sum+=floor(mid*(1/pow(k,power)));
        power++;
    
    }
    if ((sum)>=n){
        return true;
    }
    else{
        return false;
    }
        
}

int main(){
  ll n;
  int k;
    cin >> n >> k;

    int l=1;
    int r=n-1;
    int ans=0;


    while (l<=r){
        ll mid = (l+r)/2;
        if (check(mid,n,k)){
            r=mid-1;
            ans=mid;

        }
        else{
            l=mid+1;
        }
        
    }
    cout<<ans<<endl;


    return 0;
}