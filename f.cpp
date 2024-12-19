#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);  
    cin.tie(0); 
    int q;
    ll n;
    cin>>q>>n;
    for (int i = 0; i < q; i++)
{
    int a;
    ll b;
    cin>>a;
    if (a==1){
        cin>>b;
        n=n|b;
        cout<<n<<endl;
    }
    else if(a==2){
        cin>>b;
        n=n&b;
        cout<<n<<endl;
    }
    else if(a==3){
        cin>>b;
        n=n^b;
        cout<<n<<endl;
    }
    else {
        n=~n;
        cout<<n<<endl;
    }
}

    return 0;
}