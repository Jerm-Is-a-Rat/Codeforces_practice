#include <bits/stdc++.h>


void solve() {
    int n;
    std::cin >> n;
    // Your code here
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    std::vector<int> shoes(4);
    
    for (int i{0}; i <= 3; i++)
      std::cin >> shoes[i];
    
    int similar{0};
    int a;
    
    for (int i{0}; i < 4; i++) {
      for (int k{i+1}; k < 4; k++) {
        if (shoes[i] == shoes[k]) {
          similar++;
          break;
        }
      }
    }


    std::cout << "Answer = " << similar << "\n";
    std::cout << "Number of Uniques = " << 4 - similar;
    
    return 0;
}
