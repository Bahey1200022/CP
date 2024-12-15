#include <bits/stdc++.h>



using namespace std;
#define ll long long
#define endl "\n"


int main(){

    string recipe;
    cin >> recipe;
    int nb,ns,nc;
    cin >> nb >> ns >> nc;
    int pb,ps,pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    int tot=0;
    int ans=0;
    bool check=false;
    int needb=0,needs=0,needc=0;
    for (int i = 0; i < recipe.size(); i++){
        if (recipe[i]=='B'){
            tot+=pb;
            needb++;
        }
        else if (recipe[i]=='S'){
            tot+=ps;
            needs++;

        }
        else{
            tot+=pc;
            needc++;
        }
    }
     //cout<<needb<<" "<<needs<<" "<<needc<<endl;

    ////////////////////
    int l=0;
    ll rh=1e12;
    while (l<=rh){
        int mid = (l+rh)/2;
        ll cost = max(0LL, (ll)(needb * mid - nb) * pb) + 
                  max(0LL, (ll)(needs * mid - ns) * ps) + 
                  max(0LL, (ll)(needc * mid - nc) * pc);
        //cout<<mid<<" "<<cost<<endl;
        if (cost<=r){
            check=true;
        }
        else{
            check=false;
        }
            

        if (check){
            l=mid+1;
            ans=mid;
        }
        else{
            rh=mid-1;

        }

    }
cout<<ans<<endl;



    

    return 0;
}