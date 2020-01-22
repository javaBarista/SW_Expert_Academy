#include <iostream>

using namespace std;

int main() {
	int t;
	scanf(" %d", &t);

	for (int x = 1; x <= t; x++) {
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			int num;
			scanf(" %d", &num);
			num % 2 == 1 ? sum += num : sum;
		}
		printf("#%d %d\n", x, sum);
	}
}