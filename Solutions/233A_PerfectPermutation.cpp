#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

/* 
 * For permutation to be perfect,
 * Even indexes have value of i - 1
 * Odd indexes have value of i + 1
 * Iterate and populate an array from 1 to n
 *
 * n must be an even number, else return -1
 */


void solve() {
    int n;
    cin >> n;
    // Your code here
    
    if (n % 2 != 0 ) {
      std::cout << -1;
    }
    else {
      int arr[n];
  
      for (int i = 1; i <= n; i++) {
        int val;
        if (i % 2 == 0) {
          val = i - 1;
          arr[i] = val;
        } 
        else { 
          val = i + 1;
          arr[i] = val;
        }  
      std::cout << arr[i] << " ";
      }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
