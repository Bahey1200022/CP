#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (auto &i : a){
        cin >> i;
    }
    for (auto &i : b){
        cin >> i;
    }
    vector<int> ans(m);
    sort(a.begin(),a.end());
    for (int i = 0; i < m; i++){
        int anss=0;
        int l=0;
        int r=n-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (a[mid]<=b[i]){
                anss=mid+1;
                l=mid+1;
            }
            else {
                r=mid-1;
            }

        }
        ans[i]=anss;
        
        
    }
    for (auto i : ans){
        cout << i << " ";
    }


    return 0;
}