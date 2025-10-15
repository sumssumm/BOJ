#include <iostream>

int main() {
  std::string n;
  std::cin >> n;

  if (stoi(n) < 10 || stoi(n) > 99999999 || n.size() % 2 != 0) return 1;

  int left = 0, right = 0;
  for (int i = 0; i < n.size(); ++i) {
    if (i < n.size() / 2)
      left += n[i] - '0';
    else
      right += n[i] - '0';
  }
  if (left == right)
    std::cout << "LUCKY" << "\n";
  else
    std::cout << "READY" << "\n";
  return 0;
}