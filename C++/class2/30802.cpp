#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<int> sizes(6);
  for (int i = 0; i < 6; ++i)
    std::cin >> sizes[i];

  int t, p;
  std::cin >> t >> p;

  int tshirts = 0;
  for (int i = 0; i < 6; ++i)
    tshirts += (sizes[i] + t - 1) / t;

  int pens = 0, remainder = 0;
  pens = n / p;
  remainder = n % p;

  std::cout << tshirts << "\n";
  std::cout << pens << " " << remainder << "\n";
  return 0;
}

// #include <iostream>
// #include <vector>

// void countT(std::vector<int> sizes, int t) {
//   int cnt_t = 0;
//   for (int i = 0; i < 6; ++i) {
//     if (sizes[i] != 0 && sizes[i] <= t)
//       cnt_t++;
//     else if (sizes[i] != 0 && sizes[i] > t && sizes[i] % t != 0)
//       cnt_t += sizes[i] / t + 1;
//     else if (sizes[i] != 0)
//       cnt_t += sizes[i] / t;
//   }
//   std::cout << cnt_t << "\n";
// }

// void countP(int n, int p) {
//   int a = 0, b = 0;
//   a = n / p;
//   b = n % p;
//   std::cout << a << " " << b << "\n";
// }

// int main() {
//   int n = 0;
//   std::cin >> n;

//   std::vector<int> sizes(6);
//   for (int i = 0; i < 6; ++i)
//     std::cin >> sizes[i];

//   int t = 0, p = 0;
//   std::cin >> t >> p;

//   countT(sizes, t);
//   countP(n, p);

//   return 0;
// }