#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int bars;
    cin >> bars;
    vector<int> ch(bars);
    for (int i=0;i<bars;i++){
        cin>>ch[i];
    }
    int a=0;
    int b=0;
    if (bars==1){
        a++;

    }
    else if (bars==2){
        a++;
        b++;
    }
    else{
    int counts=2;
   
    int indexb=bars-1;
    int indexa=0;
     int sumb=ch[indexb];
    int suma=ch[indexa];
    int tempb=sumb;
    int tempa=suma;
    while (counts<=bars+1){
        //cout<< "counts: "<<counts<<endl;
       
        if (tempb<tempa){
            sumb=tempb;
            //cout<< "sumb: "<<sumb<<endl;

            indexb--;
            counts++;
            b++;
            tempb=sumb+ch[indexb];

           
        }
        else if (tempa<tempb){
            suma=tempa;
           // cout<< "suma: "<<suma<<endl;
            indexa++;
            counts++;
            a++;
            tempa=suma+ch[indexa];
       
        }
        else{
            sumb=tempb;
            indexb--;
            suma=tempa;
            indexa++;
            counts+=2;
            a++;
            b++;
            tempb=sumb+ch[indexb];
            tempa=suma+ch[indexa];
            if(indexa==indexb && tempb==tempa){
            a++;
            
            break;
            
        }     
            //cout<< "hena"<<endl;
        }
          
       
        //   tempb=sumb+ch[indexb-1];
        //  tempa=suma+ch[indexa+1];
    }
    

}
cout<<a<<" "<<b<<endl;
    return 0;
}