#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    while (n != 0) {
        vector<int> v(n);
        stack<int> s;
        
        // Read input
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        // Push to stack in reverse order (fixed bounds)
        for (int i = n-1; i >= 0; i--) {
            s.push(v[i]);
        }
        
        int last = 1;
        stack<int> temp;
        bool possible = true;
        
        while (!s.empty() || !temp.empty()) {
            // Try to match from main stack
            while (!s.empty() && s.top() == last) {
                s.pop();
                last++;
            }
            
            // Try to match from temp stack
            while (!temp.empty() && temp.top() == last) {
                temp.pop();
                last++;
            }
            
            // If both stacks are empty, break
            if (s.empty() && temp.empty()) break;
            
            // If main stack is empty, we can't proceed
            if (s.empty()) {
                possible = false;
                break;
            }
            
            // Check if we should move to temp stack
            if (temp.empty() || s.top() < temp.top()) {
                temp.push(s.top());
                s.pop();
            } else {
                possible = false;
                break;
            }
        }
        
        cout << (possible && last == n+1 ? "yes" : "no") << endl;
        cin >> n;
    }
    
    return 0;
}