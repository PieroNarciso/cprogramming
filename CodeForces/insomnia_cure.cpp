// https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	int count = 0;
	for (int i = 0; i < d; ++i) {
		int cmp = i+1;
		if (!(cmp % k) || !(cmp % l) || !(cmp % m) || !(cmp % n)) {
			count++;
		}
	}
	cout << count << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
