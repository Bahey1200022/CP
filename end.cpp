#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

int t;
cin >> t;
vector<string> r;
while(t--){

int n,m,k;
cin >> n >> m >> k;
vector<int> a(m);
int sum=0;
for(int i=0;i<m;i++){
    cin >> a[i];
}
for (int i=0;i<n;i++){ sum+=i+1;
}
vector<int> q(k);
int sumk=0;
for(int i=0;i<k;i++){
    cin >> q[i];sumk+=q[i];}
int lists=m-1;
string res(m,'0');
    if (k==n){
        for (int i=0;i<m;i++){
            res[i]='1';
        }

    }
    else if (n-1>k){
         for (int i=0;i<m;i++){
            res[i]='0';
        }
    }
   
    else {
        
        vector<int> list(m);
        for (int i=0;i<m;i++){
            list[i]=sum-a[i];
            if (list[i] ==sumk) 
            {
                res[i]='1';
                
            }

        }


       


    }

r.push_back(res);






}
for(auto x:r){
    cout << x << endl;
}
    return 0;
}