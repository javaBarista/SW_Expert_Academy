#include <iostream>

using namespace std;

void pascal(int n) {
	int triangle[11][21] = { 0 };
	triangle[1][n] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= (n << 1); j++) {
			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j + 1];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n << 1); j++) {
			if (triangle[i][j] > 0) printf("%d ", triangle[i][j]);
		}
		putchar('\n');
	}
}

int main() {
	int t;	
	scanf(" %d", &t);
	for (int x = 1; x <= t; x++) {
		int n;
		scanf(" %d", &n);
		printf("#%d\n", x);
		pascal(n);
	}
}