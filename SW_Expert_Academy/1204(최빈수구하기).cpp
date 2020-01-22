#include <iostream>

using namespace std;

int main() {
	int t;
	scanf(" %d", &t);

	while (t--) {
		int student[101] = { 0 };
		int x;
		scanf(" %d", &x);
		
		for (int i = 0; i < 1000; i++) {
			int num;
			scanf(" %d", &num);
			student[num]++;
		}
		
		int max = 0;
		for (int i = 0; i <= 100; i++) {
			student[max] <= student[i] ? max = i : max;
		}
		printf("#%d %d\n", x, max);
	}
}