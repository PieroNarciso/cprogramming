// https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int& n) {
	if (n <= 1) {
		return false;
	}

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void solve() {
	int n, m;
	cin >> n >> m;

	for (int i = n+1; i < m; ++i) {
		if (isPrime(i)) {
			cout << "NO";
			return;
		}
	}
	if (isPrime(m)) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
