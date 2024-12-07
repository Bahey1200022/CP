#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype> // Include this header for std::tolower
#include <map>
using namespace std;
#define ll long long
bool hasDigitThree(int num) {
    string numStr = to_string(num);
    return numStr.find('3') != string::npos;
}

int main(){

    int n;
    cin >> n;
    vector<int> res;
   for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        int k=0, j=0; //k index ori
      while (k !=a){
        if (j%3!=0 && j%10!=3){
            k++;
      }
      j++;

    }
    res.push_back(j-1);}
    for (int i = 0; i < n; i++){
        cout << res[i] << "\n";
    }



    return 0;
}