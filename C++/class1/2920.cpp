#include <array>
#include <iostream>

int main() {
  std::array<int, 8> note = {0};

  for (int i = 0; i < 8; ++i) {
    std::cin >> note[i];
  }

  std::array<int, 9> check = {0};
  bool valid = true;
  for (int i = 0; i < 8; ++i) {
    if (note[i] < 1 || note[i] > 8 || check[note[i]] > 0) {
      valid = false;
      break;
    }
    check[note[i]]++;
  }
  if (!valid)
    return 1;

  bool ascending = true;
  bool descending = true;
  for (int i = 0; i < 8; ++i) {
    if (note[i] != i + 1)
      ascending = false;
    if (note[i] != 8 - i)
      descending = false;
  }
  if (ascending == true)
    std::cout << "ascending" << "\n";
  else if (descending == true)
    std::cout << "descending" << "\n";
  else
    std::cout << "mixed" << "\n";
  return 0;
}
