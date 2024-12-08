#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int cases ;
    cin >> cases;
    vector <string> res;
   
    for (int i = 0; i < cases; i++){
        string s;
        cin >> s;
        map <char, int> m;
        string half = "";
        string result = "";
        char mid = ' ';
        for (char c : s){
            m[c]++;
        }
        int count = 0;
        for (const auto& pair : m) {
        if (pair.second %2 !=0 ) {
            count++;
            mid = pair.first;
            if (count > 1){
            res.push_back("impossible");
                 goto nextcase;
            }

        }
        half += string(pair.second/2, pair.first);
        }
         result = half;
        if (count == 1){
            result += mid;
        }
        reverse(half.begin(), half.end());
        result += half;
        res.push_back(result);
        
       
        
        nextcase : continue;

    
        
    }
    for (int i = 0; i < cases; i++){
        cout << res[i] << endl;
    }


    return 0;
}