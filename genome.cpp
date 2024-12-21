/*
https://codeforces.com/problemset/problem/747/B*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n>>s;
    map<char, int> m;
    if (n % 4 != 0){
        cout << "===" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++){
        m[s[i]]++;
    }
    int w=n/4;
    if (m['A'] > w || m['C'] > w || m['G'] > w || m['T'] > w){
        cout << "===" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++){
        if (s[i] == '?'){
            if (m['A'] < w){
                s[i] = 'A';
                m['A']++;
            }
            else if (m['C'] < w){
                s[i] = 'C';
                m['C']++;
            }
            else if (m['G'] < w){
                s[i] = 'G';
                m['G']++;
            }
            else if (m['T'] < w){
                s[i] = 'T';
                m['T']++;
            }
        }
    }

    cout << s << endl;


    

        

    return 0;
}