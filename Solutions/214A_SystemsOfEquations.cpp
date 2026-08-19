#include <bits/stdc++.h>
#include <algorithm>

/* Simple brute force algorithm
 * Find upper limit of possible solutions by takaing the square root of n or m
 * Loop through all possible values of a and b
 * Increment a count if system is solvable
 * */ 


using namespace std;
using vi = vector<int>;

void solve() {
    int n, m;
    cin >> n >> m;
    // Your code here
    
    int upper_limit;
    upper_limit = static_cast<int>(sqrt(max({n, m})));

    int count{};

    for (int a = 0; a<=upper_limit; a++) {
      for (int b = 0; b <= upper_limit; b++) {
        if (a*a + b == n && b*b + a == m) {
          count++;
         // cout << a << " " << b << "\n";
        }
      }
    }
    cout << count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
