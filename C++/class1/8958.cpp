#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n = 0;
  std::cin >> n;

  std::string str;
  while (n--) {
    std::cin >> str;
    int score = 0;
    int cnt = 1;
    for (int i = 0; i < str.size(); ++i) {
      if (str[i] == 'O') {
        score += cnt;
        ++cnt;
      } else
        cnt = 1;
    }
    std::cout << score << "\n";
  }
  return 0;
}