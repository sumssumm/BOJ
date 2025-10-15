#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s;
  std::cin >> s;

  std::vector<int> pos(26, -1);

  for (int i = 0; i < s.length(); ++i) {
    char c = s[i];
    int index = c - 'a';
    if (pos[index] == -1)
      pos[index] = i;
  }

  for (int i = 0; i < 26; ++i) {
    std::cout << pos[i];
    if (i != 25)
      std::cout << " ";
  }
  std::cout << "\n";
  return 0;
}

// #include <array>
// #include <iostream>

// int main() {
//   std::string str;
//   std::cin >> str;
//   if (str.size() < 0 || str.size() > 100)
//     return 1;

//   std::array<int, 26> pos;
//   pos.fill(-1);
//   std::array<char, 26> alpha;
//   for (int i = 0; i < 26; ++i)
//     alpha[i] = 'a' + i;

//   for (int i = 0; i < str.size(); ++i) {
//     for (int j = 0; j < 26; ++j) {
//       if (str[i] == alpha[j] && pos[j] == -1)
//         pos[j] = i;
//     }
//   }
//   for (int i = 0; i < 26; ++i) {
//     if (i == 25)
//       std::cout << pos[i] << "\n";
//     else
//       std::cout << pos[i] << " ";
//   }
//   return 0;
// }