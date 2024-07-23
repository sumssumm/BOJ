#include <iostream>

int main() {
  int sleepT = 0, wakeT = 0;
  std::cin >> sleepT >> wakeT;

  if (((sleepT >= 20 && sleepT <= 23) || (sleepT >= 0 && sleepT <= 3)) &&
      (wakeT >= 5 && wakeT <= 10)) {
    if (sleepT >= 20)
      std::cout << 24 - sleepT + wakeT << "\n";
    else
      std::cout << wakeT - sleepT << "\n";
  } else
    return 1;

  return 0;
}