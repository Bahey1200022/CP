#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        ll n, x, y; // Input parameters
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll totalSum = 0;

        // Input array and compute total sum
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalSum += a[i];
        }

        // Sort the array for two-pointer approach
        sort(a.begin(), a.end());

        ll count = 0; // To store the number of valid pairs

        // Two-pointer approach
        for (int i = 0; i < n; i++) {
            ll low = totalSum - y - a[i]; // Minimum required value
            ll high = totalSum - x - a[i]; // Maximum required value

            // Find range using binary search
            int l = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();
            int r = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin();

            // Add the count of valid pairs in the range
            count += (r - l);
        }

        // Output the result for this test case
        cout << count << endl;
    }

    return 0;
}
