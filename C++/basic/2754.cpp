#include <iomanip>
#include <iostream>
#include <map>

int main() {
  std::map<std::string, double> gradeMap = {
      {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7}, {"B+", 3.3}, {"B0", 3.0},
      {"B-", 2.7}, {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7}, {"D+", 1.3},
      {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}};

  std::string grade;
  std::cin >> grade;

  std::map<std::string, double>::iterator it = gradeMap.find(grade);
  if (it != gradeMap.end())
    std::cout << std::fixed << std::setprecision(1) << gradeMap[grade] << "\n";
  else
    return 1;
  return 0;
}