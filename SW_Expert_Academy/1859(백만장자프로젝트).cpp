#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
vector<int> v;

ll profit(int n){
	ll sum = 0;
	int max = v[0];

	for (int i = 1; i < n; i++) {
		max < v[i] ? max = v[i] : (sum += (max - v[i]));
	}
	return sum;
}

int main() {
	int t;
	scanf(" %d", &t);

	for (int x = 1; x <= t; x++) {
		int n;
		scanf(" %d", &n);
		v.clear();
		v.resize(n);
		
		for (int i = n - 1; i >= 0; i--) {
			scanf(" %d", &v[i]);
		}
		printf("#%d %lld\n", x, profit(n));
	}
}