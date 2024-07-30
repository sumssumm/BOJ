#include <cmath>
#include <iostream>
#include <map>
using namespace std;

int main() {
  int L;
  std::string str;
  cin >> L >> str;

  map<char, int> alpha;
  for (int i = 0; i < 26; ++i)
    alpha['a' + i] = i + 1;

  map<char, int>::iterator iter;
  long hash = 0;
  long r = 1;
  for (int i = 0; i < L; ++i) {
    for (iter = alpha.begin(); iter != alpha.end(); ++iter) {
      if (str[i] == iter->first) {
        hash += iter->second * r % 1234567891;
        r = (r * 31) % 1234567891;
      }
    }
  }
  cout << hash % 1234567891 << "\n";
  return 0;
}