#include <iostream>
#include <set>

int main() {
  std::set<int> remainders;

  for (int i = 0; i < 10; ++i) {
    int num;
    std::cin >> num;
    if (num < 0 || num > 1000)
      return 1;
    int remainder = num % 42;
    remainders.insert(remainder);
  }
  std::cout << remainders.size() << "\n";
  return 0;
}

// #include <iostream>
// #include <vector>

// int main() {
//   std::vector<int> numbers(10);
//   for (int i = 0; i < 10; ++i) {
//     std::cin >> numbers[i];
//     if (numbers[i] < 0 || numbers[i] > 1000)
//       return 1;
//   }

//   std::vector<bool> result(43, false);
//   for (int i = 0; i < 10; ++i) {
//     result[numbers[i] % 42] = true;
//   }

//   int cnt = 0;
//   for (bool elem : result) {
//     if (elem == true)
//       cnt++;
//   }
//   std::cout << cnt << "\n";
//   return 0;
// }