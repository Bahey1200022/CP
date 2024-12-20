/*

https://codeforces.com/problemset/problem/63/A
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> rats;
        vector<string> women;
        vector<string> men;
        vector<string> captain;
    for (int i = 0; i < n; i++){
        string name, status;
        cin >> name >> status;
        
        if (status == "rat"){
            rats.push_back(name);
        }
        else if (status == "woman" || status == "child"){
            women.push_back(name);
        }

        else if (status == "man"){
            men.push_back(name);
        }
        else {
            captain.push_back(name);
        }

        
    }
    for (int i = 0; i < rats.size(); i++){
        cout << rats[i] << endl;
    }
    for (int i=0;i<women.size();i++){
        cout<<women[i]<<endl;
    }
    for (int i=0;i<men.size();i++){
        cout<<men[i]<<endl;
    }
    for (int i=0;i<captain.size();i++){
        cout<<captain[i]<<endl;
    }
    return 0;
}