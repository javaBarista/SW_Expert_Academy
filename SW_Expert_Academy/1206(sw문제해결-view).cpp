#include <iostream>

using namespace std;

//자신의 혈재 위치 -2 ~ +2 사이에 수중에 최대값 찾기
//최대값이 현재 배열의 값보다 클때 최대값의 인덱스가 -쪽이면 0을 더하고 +쪽이면 인덱스를 최대값으로 이동
//최대값이 현재 배열의 값보다 작으면 합계에 더해주고 2칸 이동

static int building[1000];

int main() {
	for (int x = 1; x < 11; x++) {
		int n;
		scanf(" %d", &n);
		
		for (int i = 0; i < n; i++) scanf(" %d", &building[i]);

		int sum = 0;
		int i = 2;
		while (i <= n - 2) {
			int max = 0;
			for (int j = 1; j <= 2; j++) {
				if (building[max] < building[i - j]) max = i - j;
				if (building[max] <= building[i + j]) max = i + j;
			}

			if (building[max] < building[i]) sum += (building[i] - building[max]);
			i++;
		}
		printf("#%d %d\n", x, sum);
	}
}