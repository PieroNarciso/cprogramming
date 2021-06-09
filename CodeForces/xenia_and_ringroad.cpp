#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int e;
	int curr = 1;
	long long count = 0;
	for (int i = 0; i < m; ++i) {
		cin >> e;
		if (e >= curr) {
			count += e - curr;
		} else if (e < curr) {
			count += n - curr + e;
		}
		curr = e;
	}
	cout << count;
}

int main(int argc, const char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
