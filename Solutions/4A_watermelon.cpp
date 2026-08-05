#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// n must be an even number more than 4.

void solve() {
    int n;
    cin >> n;
    if (n >= 4 && n % 2 == 0) {
      cout << "YES";
    } 
    else {
      cout << "NO";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
