#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

int t ;
cin >> t;
for (int k=0;k<t;k++){
    int n;
    cin >> n;
    int c=0;
    vector<int>a(n);
    vector<int>mp(n+1,0);
    for (int i=0;i<n;i++){
        cin>>a[i];
        ++mp[a[i]];}

        for (int l=0;l<n;l++){
            int sum=0;
            for (int j=l;j<n;j++){
                sum+=a[j];
                if (l ==j)
				{
				    continue;
				}
                if (sum<=n){
                    c+=mp[sum];
                    mp[sum]=0;

                }
            }

        }
       
        cout<<c<<endl;
      





}

return 0;
}