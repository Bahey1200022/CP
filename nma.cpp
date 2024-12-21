#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,m,a;
    cin >> n >> m >> a;
    if (a*a >= n*m){
        cout << 1<<endl;
        
    }
    
    
    
    
    else {
        int ans=0;
        ll neededrows=ceil((double)n/a);
        ll neededcols=ceil((double)m/a);

      
        cout << neededrows*neededcols<<endl;






    }
        




    return 0;
}