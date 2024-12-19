#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(0);  
    cin.tie(0); 

    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(m.find(str) == m.end()){
            m[str] = 0;
            cout << "OK" << endl;
        }
        else{
            m[str]++;
            cout << str << m[str] << endl;
        }
    
    }
    return 0;
}