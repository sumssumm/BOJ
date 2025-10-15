#include <iostream>
#include <set>

int main() {
  std::set<int> students;
  for (int i = 1; i <= 30; ++i) students.insert(i);

  int n = 0;
  for (int i = 0; i < 28; ++i) {
    std::cin >> n;
    if (n < 1 || n > 30) return 0;
    students.erase(n);
  }

  for (int student : students) std::cout << student << "\n";
  return 0;
}