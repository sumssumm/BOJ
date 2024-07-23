// #include <iostream>

// int main() {
//   int home[5] = {0}, visit[5] = {0};

//   for (int i = 0; i < 5; ++i) {
//     std::cin >> visit[i];
//     if (visit[i] < 0 || visit[i] > 10) return 1;
//   }
//   if (visit[0] < visit[3] + visit[4]) return 1;

//   for (int i = 0; i < 5; ++i) {
//     std::cin >> home[i];
//     if (home[i] < 0 || home[i] > 10) return 1;
//   }
//   if (home[0] < home[3] + home[4]) return 1;

//   std::cout << visit[0] * 6 + visit[1] * 3 + visit[2] * 2 + visit[3] +
//                    visit[4] * 2
//             << " "
//             << home[0] * 6 + home[1] * 3 + home[2] * 2 + home[3] + home[4] *
//             2
//             << "\n";
//   return 0;
// }

#include <iostream>

int calculator(int T, int F, int S, int P, int C) {
  return T * 6 + F * 3 + S * 2 + P * 1 + C * 2;
}

int main() {
  int T1 = 0, F1 = 0, S1 = 0, P1 = 0, C1 = 0;
  int T2 = 0, F2 = 0, S2 = 0, P2 = 0, C2 = 0;

  std::cin >> T1 >> F1 >> S1 >> P1 >> C1;
  std::cin >> T2 >> F2 >> S2 >> P2 >> C2;
  if (T1 < P1 + C1 || T2 < P2 + C2) return 1;

  int visit = calculator(T1, F1, S1, P1, C1);
  int home = calculator(T2, F2, S2, P2, C2);
  std::cout << visit << " " << home << "\n";
  return 0
}