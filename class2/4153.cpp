#include <algorithm>
#include <cmath>
#include <iostream>

bool is_triangle(int a, int b, int c) {
  int sides[3] = {a, b, c};
  std::sort(sides, sides + 3);
  return pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2);
}

int main() {
  long a = 0, b = 0, c = 0;

  while (true) {
    std::cin >> a >> b >> c;
    if (a < 0 || a >= 30000 || b < 0 || b >= 30000 || c < 0 || c >= 30000)
      break;
    if (a == 0 && b == 0 && c == 0)
      break;

    if (is_triangle(a, b, c))
      std::cout << "right" << "\n";
    else
      std::cout << "wrong" << "\n";
  }
}

// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>

// int main() {
//   std::string line;

//   while (std::getline(std::cin, line)) {
//     std::stringstream ss(line);
//     std::vector<int> numbers;
//     int number;

//     while (ss >> number)
//       numbers.push_back(number);

//     std::sort(numbers.begin(), numbers.end());

//     if (numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0)
//       break;

//     if (pow(numbers[0], 2) + pow(numbers[1], 2) == pow(numbers[2], 2))
//       std::cout << "right" << "\n";
//     else
//       std::cout << "wrong" << "\n";
//   }
//   return 0;
// }