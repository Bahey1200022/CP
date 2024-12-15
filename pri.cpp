#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool isPrime(int n) {
    if (n <= 1) return false;          // Numbers less than or equal to 1 are not prime
    if (n <= 3) return true;           // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0)      // Exclude multiples of 2 and 3
        return false;

    // Check divisors from 5 to √n, incrementing by 6
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;  // If no divisors found, n is prime
}
int main(){
    int n;
    cin >> n;
    vector<bool>v(n+1,false);
    for (int i = 1; i <=n; i++){
        if (isPrime(i)){
            v[i]=true;
        }
    }
    int c=0;
    for (int i = 6; i <= n; i++){
        int c1=0;
        for (int j = 2; j*j <= i; j++){
            if(i%j==0 && v[j]){
                c1++;
            }
            if (c1>2){
                break;
        }
        

    }
    if (c1==2){
        c++;
    }
    }
    cout<<c<<endl;


    return 0;
}
