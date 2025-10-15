#include <iostream>

using namespace std;

int main() {
  while (true) {
    string num;
    cin >> num;
    bool chk = true;

    if (num == "0") break;
    for (int i = 0; i < num.size() / 2; ++i) {
      if (num[i] != num[num.size() - 1 - i]) chk = false;
    }
    if (chk)
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}