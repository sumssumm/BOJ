#include <cctype>
#include <iostream>
#include <string>

bool isAlphanumeric(char ch) {
  return (ch >= 'A' && ch <= 'Z' || isdigit(ch) || ch == '$' || ch == '%' ||
          ch == '*' || ch == '+' || ch == '-' || ch == '.' || ch == '/' ||
          ch == ':');
}

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 1 || n > 1000)
    return 1;

  while (n--) {
    int r = 0;
    std::string str;
    std::cin >> r >> str;
    if (r < 1 || r > 8 || str.size() < 1 || str.size() > 20)
      break;

    bool valid = true;
    for (char ch : str) {
      if (!isAlphanumeric(ch)) {
        valid = false;
        break;
      }
    }
    if (!valid)
      break;

    std::string res;
    for (char ch : str)
      res.append(r, ch);

    std::cout << res << std::endl;
  }
  return 0;
}