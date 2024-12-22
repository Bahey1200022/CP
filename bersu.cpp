#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i=0;i<n;i++){
        cin>>boys[i];}
    int m;
    cin >>m;
    vector<int> girls(m);
    for (int i=0;i<m;i++){
        cin>>girls[i];}
        int count=0;
       int index =min(n,m)*2;
       sort(boys.begin(),boys.end());
       sort(girls.begin(),girls.end());
       
         for (int i=0;i<n;i++){
              for (int j=0;j<m;j++){
                if (abs(boys[i]-girls[j])<=1){
                    count++;
                    girls[j]=1000;
                    break;
              }}}
cout<<count<<endl;

    return 0;
}