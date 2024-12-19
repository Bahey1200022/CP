#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(0);  
    cin.tie(0); 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int j = 0; j < n; j++){
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
            
        }
      
sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
    if (a.first == b.first) return a.second > b.second;  // If first elements equal
    return a.first < b.first;                           // Sort by first element
});


        for (int j = 0; j < n; j++){
            cout << v[j].first << " " << v[j].second << endl;
        }
    }
    return 0;

}