#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int rounds ;
    cin >> rounds;
    cin.ignore();
    map<string,int> m;
    vector<string> v(rounds);
    vector<int> scores(rounds);
    for (int i = 0; i < rounds; i++){
       
        cin >> v[i] >> scores[i];
        m[v[i]]+=scores[i];
    }
    int maxscore = 0;
    for (auto x: m){
        maxscore = max(maxscore, x.second);
    }
    map<string,int> m2;
    for (int i = 0; i < rounds; i++){
        m2[v[i]]+=scores[i];
        if (m2[v[i]]>=maxscore && m[v[i]]==maxscore){
            cout << v[i] << endl;
            return 0;
        }
    }
     
    

    
    return 0;
}