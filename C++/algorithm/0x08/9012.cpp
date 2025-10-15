#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    stack<char> s;
    bool isValid = true;
    for (char c : str) {
      if (c == '(')
        s.push(c);
      else {
        if (s.empty()) {
          isValid = false;
          break;
        }
        s.pop();
      }
    }
    if (isValid && s.empty())
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}