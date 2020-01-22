#include <iostream>

using namespace std;

struct frame {
	int val;
	bool chk;
};

int n, k, res;
static frame sequence[20];

void visit(int sum, int cnt) {
	if (sum == k) {
		res++;
		return;
	}

	for (int i = cnt; i < n; i++) {
		if (!sequence[i].chk) {
			sequence[i].chk = true;
			visit(sum + sequence[i].val, i);
			sequence[i].chk = false;
		}
	}
}

int main() {
	int t;
	scanf(" %d", &t);
	for (int x = 1; x <= t; x++) {
		scanf(" %d %d", &n, &k);
		for (int i = 0; i < n; i++) {
			scanf(" %d", &sequence[i].val);
		}
		res = 0;
		visit(0, 0);
		printf("#%d %d\n", x, res);
	}
}