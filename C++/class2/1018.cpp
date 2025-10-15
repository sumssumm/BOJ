#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int calcolor(const vector<string> &board, int startX, int startY, char startcolor) {
	char currentColor = startcolor;

	int cnt = 0;
	for (int i = 0; i < 8; ++i ) {
		for (int j = 0; j < 8; ++j) {
			if (board[startX + i][startY + j] != currentColor)
				cnt++;
			currentColor = (currentColor == 'W') ? 'B' : 'W';
		}
		currentColor = (currentColor == 'W') ? 'B' : 'W';
	}
	return cnt;
}

int main() {
	int N, M;
	cin >> N >> M;

	vector<string> board(N);
	for (int i = 0; i < N; ++i)
		cin >> board[i];
	int mincnt = numeric_limits<int>::max();
	for (int i = 0; i <= N - 8; ++i) {
		for (int j = 0; j <= M - 8; ++j)
		{
			int whitecnt = calcolor(board, i, j, 'W');
			int blackcnt = calcolor(board, i, j, 'B');
			mincnt = min(mincnt, min(whitecnt, blackcnt));
		}
	}
	cout << mincnt << "\n";
}