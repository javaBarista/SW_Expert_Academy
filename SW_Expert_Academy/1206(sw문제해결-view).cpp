#include <iostream>

using namespace std;

//�ڽ��� ���� ��ġ -2 ~ +2 ���̿� ���߿� �ִ밪 ã��
//�ִ밪�� ���� �迭�� ������ Ŭ�� �ִ밪�� �ε����� -���̸� 0�� ���ϰ� +���̸� �ε����� �ִ밪���� �̵�
//�ִ밪�� ���� �迭�� ������ ������ �հ迡 �����ְ� 2ĭ �̵�

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