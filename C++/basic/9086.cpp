#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;
  if (t < 1 || t > 10) return 1;

  std::string str[t];
  for (int i = 0; i < t; ++i) {
    std::cin >> str[i];
    if (str[i].length() > 1000) return 1;
    for (int j = 0; j < str[j].length(); ++j)
      if (isupper(str[i][j]) == 0) return 1;
    std::cout << str[i][0] << str[i][str[i].length() - 1] << "\n";
  }
  return 0;
}