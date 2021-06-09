#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, e;
	cin >> n;
	int five = 0;
	int zero = 0;

	for (int i = 0; i < n; ++i) {
		cin >> e;
		if (e == 0) {
			zero++;
		} else {
			five++;
		}
	}

	if (!zero) {
		cout << -1;
		return;
	} else if (five < 9) {
		cout << 0;
		return;
	} else {
		five -= five % 9;
		for (int i = 0; i < five; ++i) cout << 5;
		for (int i = 0; i < zero; ++i) cout << 0;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
