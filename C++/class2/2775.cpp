#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;

  vector<vector<int> > rooms(15, vector<int>(15, 0));
  for (int i = 1; i < 15; ++i) rooms[0][i] = i;

  for (int j = 1; j < 15; ++j) {
    for (int k = 1; k < 15; ++k)
      rooms[j][k] = rooms[j][k - 1] + rooms[j - 1][k];
  }

  while (T--) {
    int k, n;
    cin >> k >> n;
    cout << rooms[k][n] << "\n";
  }
  return 0;
}
