#include <iostream>
#include <map>

int main() {
  int n = 0;
  std::cin >> n;
  if (n < 1 || n > 7) return 1;
  std::cin.ignore();

  std::map<std::string, std::string> seminarMap = {
      {"Algorithm", "204"},
      {"DataAnalysis", "207"},
      {"ArtificialIntelligence", "302"},
      {"CyberSecurity", "B101"},
      {"Network", "303"},
      {"Startup", "501"},
      {"TestStrategy", "105"}};
  for (int i = 0; i < n; ++i) {
    std::string seminar;
    std::getline(std::cin, seminar);
    // std::cin >> seminar;
    std::cout << seminarMap[seminar] << "\n";
  }
}