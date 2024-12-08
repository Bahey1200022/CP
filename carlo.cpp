#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
#define endl "\n"
int main(){

    int cases ;
    cin >> cases;
    vector<pair<int,int>>res;
    int period=300;
    for (int i =0;i<cases;i++){

        int N;
        cin >> N;
        vector<int> time(N);
        for (int j = 0; j < N; j++){
            cin >> time[j];
        }
        sort(time.begin(),time.end());
        int sum=0;
        int prb=0;
        int pe=0;
      for (int j = 0; j < N; j++){
          if (sum+time[j]<=period){
              sum+=time[j];
              prb++;
              pe += sum;

          }
          else{
              break;
          }}
        


        pair<int,int> temp;
        temp.first=prb;
        temp.second=pe;
        res.push_back(temp);
  



    }

    for (int i = 0; i < res.size(); i++){
        cout << res[i].first <<" "<< res[i].second << endl;
    }




    return 0;
}