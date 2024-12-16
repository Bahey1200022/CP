#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v){
        cin >> i;
    }
    sort(v.begin(),v.end());
    int sum = 0;
    int ans=0;
    for (int i = 0; i < n; i++){
        if (sum<=v[i]){
            sum+=v[i];
            ans++;
            
        }
    
        
    }
    
   
    cout << ans<<endl;
  

    return 0;
}