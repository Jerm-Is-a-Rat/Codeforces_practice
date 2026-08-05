#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// Take first integer input as the number of iterations needed
// As cin takes in inputs sequentially, store 3 inputs in vars p, v and t
// if p+v+t is 2 or 3, then the problem is solvable, increment solves by 1.


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int solves{};
    int problems{};

    cin >> problems;

    for (int i{ 1 }; i <= problems; i++) {
        int p, v, t;
        cin >> p >> v >> t;
 
        if (p + v + t >= 2)
          solves++;
        else continue;
    }
    cout << solves;
    return 0;
}
