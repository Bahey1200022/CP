#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;
    cin.ignore();
    deque<int> dq;
    bool reverse =false;
    for (int i = 0; i < q; i++){
        string s;
        getline(cin, s);
        if (s[0]=='b'){
            if (dq.empty()){
                cout << "No job for Ada?" << endl;
                
            }
            else {
                if (!reverse){
            int x = dq.back();

            cout << x << endl;
            dq.pop_back();}
            else {
                int x = dq.front();
                cout << x << endl;
                dq.pop_front();
            }}
            

        }
        else if (s[0]=='f'){
               if (dq.empty()){
                cout << "No job for Ada?" << endl;
                
            }
            else {

                if (!reverse){
            int x= dq.front();
            cout << x << endl;
            dq.pop_front();
                }
                else {
                    int x = dq.back();
                    cout << x << endl;
                    dq.pop_back();
                }
            
            
            }

        }
        else if (s[0]=='r'){
               
            reverse = !reverse;

        

        }
        else if (s[0]=='p'){
            istringstream iss(s);
            string sub;
            int num;
            iss >> sub >> num;
            if (!reverse)
            dq.push_back(num);
            else {
                dq.push_front(num);
            }

        

        }
        else {
            istringstream iss(s);
            string sub;
            int num;
            iss >> sub >> num;
            if (!reverse)
            dq.push_front(num);
            else {
                dq.push_back(num);
            }

        }
    }


    return 0;
}