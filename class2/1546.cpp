#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<double> score(N);
  for (int i = 0; i < N; ++i) cin >> score[i];

  double average = 0;
  double sum = 0;
  int max = *max_element(score.begin(), score.end());
  for (int i = 0; i < N; ++i) sum += score[i] / (double)max * 100;
  average = sum / (double)N;
  cout << average << "\n";
  return 0;
}