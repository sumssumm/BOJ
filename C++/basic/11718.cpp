#include <iostream>

int main() {
  std::string str;
  int size = 0;

  while (getline(std::cin, str) && size <= 100) {
    std::cout << str << "\n";
    if (str.length() > 100) return 1;
    ++size;
  }
}