#include <iostream>

using namespace std;

int n, m;
static int square[15][15];

int part_sum(int row, int col) {
	int sum = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			sum += square[row + i][col + j];
		}
	}

	return sum;
}

int main() {
	int t;
	scanf(" %d", &t);
	for (int x = 1; x <= t; x++) {
		scanf(" %d %d", &n, &m);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf(" %d", &square[i][j]);
			}
		}
		int max = 0;
		for (int i = 0; i <= n - m; i++) {
			for (int j = 0; j <= n - m; j++) {
				int temp = part_sum(i, j);
				max = max > temp ? max : temp;
			}
		}
		printf("#%d %d\n", x, max);
	}
}