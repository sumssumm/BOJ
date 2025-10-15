#include <cctype>
#include <iostream>

int main() {
  char c;
  std::cin >> c;
  if (!std::isalnum(c)) return 0;
  std::cout << static_cast<int>(c) << std::endl;
  return 0;
}