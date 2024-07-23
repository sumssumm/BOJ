#include <ctime>
#include <iostream>

int main() {
  std::time_t t = std::time(nullptr);
  std::tm* gmt = std::gmtime(&t);
  std::cout << gmt->tm_year + 1900 << "\n"
            << gmt->tm_mon + 1 << "\n"
            << gmt->tm_mday << "\n";
  return 0;
}