#include <iostream>

using namespace std;

void clap(int n) {
	int sds = 100;

	while (sds >= 1) {
		if (n > sds) {
			if (n / sds == 3 || n / sds == 6 || n / sds == 9) putchar('-');
			n %= (sds);
		}
		sds /= 10;
	}
	putchar(' ');
}

bool isClap(int n) {
	int sds = 100;

	while (sds >= 1) {
		if (n > sds) {
			if (n / sds == 3 || n / sds == 6 || n / sds == 9) return true;
			n %= (sds);
		}
		sds /= 10;
	}
	return false;
}

int main() {
	int n;
	scanf(" %d", &n);

	for (int i = 1; i <= n; i++) {
		if (isClap(i)) clap(i);
		else printf("%d ", i);
	}
}