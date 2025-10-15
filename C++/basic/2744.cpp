#include <cctype>
#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  int len = str.length();
  if (len > 100) return 0;
  for (int i = 0; i < len; ++i) {
    if (!isalpha(str[i])) return 0;
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
    else
      str[i] -= 32;
  }
  std::cout << str << std::endl;
  return 0;
}