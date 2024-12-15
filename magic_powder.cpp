#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> need(n);
    for (int i = 0; i < n; i++){
        cin >> need[i];
    }
    vector<int> have(n);
    for (int i = 0; i < n; i++){
        cin >> have[i];
    }


    int l=0;
    ll r=1000;
    int ans=0;
    while (l<=r){
        ll mid = (l+r)/2;
        bool check=true;
        int needs=0;
        ////////////////////
        for (int i = 0; i < n; i++){
            if (have[i]<need[i]*mid){
                needs+=need[i]*mid-have[i];
            }
                
        }
        //cout<<mid<<" "<<needs<<endl;
        if (needs>k){
            check=false;
        }
            


        if (check){
            l=mid+1;
            ans=mid;
        }
        else{
            r=mid-1;
        }
        
        

    }
    cout<<ans<<endl;


    return 0;
}