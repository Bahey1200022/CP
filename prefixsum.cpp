#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){

    int n;
    cin >> n;
    vector <ll> cost(n);

    for (int i = 0; i < n; i++){
        cin >> cost[i];
    }
    vector <ll> prefix(n);
    for (int i = 0; i < n; i++){
        if (i == 0){
            prefix[i] = cost[i];
        }
        else{
            prefix[i] = prefix[i-1] + cost[i];
        }
    }
    vector <ll> temp = cost;
                sort(temp.begin(), temp.end());
                vector <ll> prefix2(n);
                for (int i = 0; i < n; i++){
                    if (i == 0){
                        prefix2[i] = temp[i];
                    }
                    else{
                        prefix2[i] = prefix2[i-1] + temp[i];
                    }
                }

    int m;
    cin >> m;
    vector <ll> res(m);
    for (int i = 0; i < m; i++){
        int l, r,type;
        cin >> type >> l >> r;
        
        if (type == 1){
            ll sum =0;
            // for (int j = l-1; j < r; j++){
            //     sum += cost[j];
            // }
            sum = prefix[r-1] - prefix[l-1] + cost[l-1];
            res[i] = sum;
        }

        else{
          
            ll sum = 0;
            // for (int j = l-1; j < r; j++){
            //     sum +=temp[j];
            // }
            sum = prefix2[r-1] - prefix2[l-1]+temp[l-1] ;
            res[i] = sum;
            




        }
    }
    for (int i = 0; i < m; i++){
        cout << res[i] << endl;
    }
        

    return 0;
}