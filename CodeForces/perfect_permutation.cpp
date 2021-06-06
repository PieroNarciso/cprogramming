// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	if (n & 1) {
		cout << -1;
		return;
	}

	for (int i = 1; i <= n; ++i) {
		if (i & 1) {
			cout << i+1 << " ";
		} else {
			cout << i-1 << " ";
		}
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
