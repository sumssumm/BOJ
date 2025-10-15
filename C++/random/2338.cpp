#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string A, B;
  cin >> A >> B;

  cout << stoll(A) + stoll(B) << "\n";
  cout << stoll(A) - stoll(B) << "\n";
  cout << stoll(A) * stoll(B) << "\n";
}
