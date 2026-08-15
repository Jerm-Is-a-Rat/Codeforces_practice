#include <bits/stdc++.h>

using vi = std::vector<int>;

void solve() {
    
    std::string str{};
    std::cin >> str;
       
    int len{};
    len = str.length();
    
    int uniq{};

    for (int i{}; i < len; i++) {
      bool isUnique = true;

      for (int j{}; j < i; j++) {
        if (str[j] == str[i]) {
          isUnique = false;
          break;
        }
      }
    

      if (isUnique) {
        uniq++;
      }

  }
    //std::cout << uniq << "\n";
    if (uniq % 2 == 0) 
      std::cout << "CHAT WITH HER!";
    else
      std::cout << "IGNORE HIM!";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    solve();
    return 0;
} 
