#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    int piles;
    cin>>piles;
    vector<int> worms(piles);
    vector<int> prefix(piles);
    for (int i = 0; i < piles; i++){
        cin>>worms[i];
        if (i==0){
            prefix[i]=worms[i];
        }
        else{
            prefix[i]=prefix[i-1]+worms[i];
        }
    }
    int juicy;
    cin>>juicy;
    vector<int> juicyworms(juicy);
    vector<int> res(juicy);
    for (int i = 0; i < juicy; i++){
        cin>>juicyworms[i];
        int l=0;
        int r=piles-1;
        while (l<=r){
            int mid = (l+r)/2;
            if (prefix[mid]>=juicyworms[i]){
                r=mid-1;
                res[i]=mid+1;
            }
            else{
                l=mid+1;
            }
        }


    }
    for (int i = 0; i < juicy; i++){
        cout<<res[i]<<endl;
    }

    return 0;
}