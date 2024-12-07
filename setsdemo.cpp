#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> 
#include <map>
#include <set>
#include <stack>
using namespace std;
#define ll long long
int main(){

    int n;
    cin >> n;
    vector<int> snacks(n);
    vector<vector<int>> res;
    set<int> hold;
    for (int i = 0; i < n; i++){
        cin >> snacks[i];
    }

    int nextsnack=n;
    for (int i = 0; i < n; i++){
        vector <int> temp;
        if (snacks[i]==nextsnack){
            temp.push_back(snacks[i]);
            nextsnack--;
            while (hold.count(nextsnack)){
                temp.push_back(nextsnack);
                hold.erase(nextsnack);
                nextsnack--;
                

            }


        }
        else {
            hold.insert(snacks[i]);



        }

     res.push_back(temp);       
    }

for (int i = 0; i < res.size(); i++){
    for (int j = 0; j < res[i].size(); j++){
        cout << res[i][j] << " ";
    }
    cout << "\n";
        

    
}

    return 0;
}