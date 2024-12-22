#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> n >> t;
    vector<int> v(n);
    vector<int> pre(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    int sum=0;
    int start=0;
    int count=0;
    for (int i=0;i<n;i++){
        sum=sum+v[i];
        if (sum<=t){
            
            count++;
        }
        else{
            sum-=v[start];
            start++;
        }
        
    }
 cout<<count<<endl;
    

  
 

  
    return 0;
}