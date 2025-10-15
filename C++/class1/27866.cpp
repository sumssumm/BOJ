#include <iostream>

int main() {
  std::string str;
  int i = 0;

  std::cin >> str;
  if (str.length() > 1000) return 1;

  std::cin >> i;
  if (i > str.length() || i < 1) return 1;

  std::cout << str[i - 1] << "\n";

  return 0;
}