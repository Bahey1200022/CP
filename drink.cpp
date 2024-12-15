#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int shops;
    cin>>shops;
    int nums=0;
    vector<int> prices(shops);
    for (int i = 0; i < shops; i++){
        cin>>prices[i];
    }
    int queries;
    cin>>queries;
    vector<ll> money(queries);
    for (int i = 0; i < queries; i++){
        cin>>money[i];
    }

    vector<ll>res(queries);
    sort(prices.begin(),prices.end());
    for (int i = 0; i < queries; i++){
        int l=0;
        int r=shops-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (prices[mid]<=money[i]){
                l=mid+1;
                res[i]=mid+1;
            }
            else{
                r=mid-1;
            }
        }
    }
    for (int i = 0; i < queries; i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
