#include <iostream>

using namespace std;

int n, res;
static int chess[10];

bool promising(int pos) {
	for (int i = 0; i < pos; i++) {
		if (chess[i] == chess[pos] || pos - i == abs(chess[pos] - chess[i])) return false;
	}
	return true;
}

void dfs(int cnt) {
	if (cnt == n) {
		res++;
		return;
	}

	for (int i = 0; i < n; i++) {
		chess[cnt] = i;
		if (promising(cnt)) dfs(cnt + 1);
	}
}

int main() {
	int t;
	scanf(" %d", &t);

	for (int i = 1; i <= t; i++) {
		scanf(" %d", &n);
		res = 0;
		dfs(0);
		printf("#%d %d\n", i, res);
	}
}