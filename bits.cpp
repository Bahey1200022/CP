#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q,n;
    cin >> q>>n;
    for (int i=0;i<q;i++){
        int qi,x;
        cin >> qi>>x;
        if (qi==1){
            cout << ((n>>x)&1)<<endl;
        }
        else if (qi==2){
            n= n|(1<<x);
            cout << n<<endl;


        }
        else if (qi==3){
            n= n&(~(1<<x));
            cout << n<<endl;

        
        }
        else {n=n^(1<<x);cout << n<<endl;
        

        }
        

    }



    return 0;
}