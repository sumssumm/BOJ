#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str;
  while (1) {
    getline(cin, str);
    if (str == ".") break;
    stack<char> s;
    bool isValid = true;
    for (char c : str) {
      if (c == '(' || c == '[')
        s.push(c);
      else if (c == ')') {
        if (s.empty() || s.top() != '(') {
          isValid = false;
          break;
        }
        s.pop();
      } else if (c == ']') {
        if (s.empty() || s.top() != '[') {
          isValid = false;
          break;
        }
        s.pop();
      }
    }
    if (isValid && s.empty())
      cout << "yes\n";
    else
      cout << "no\n";
  }
}