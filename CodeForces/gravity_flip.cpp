#include <iostream>
#include <algorithm>

using namespace std;

// https://codeforces.com/problemset/problem/405/A

void solve() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	for (int& e: a) {
		cout << e << " ";
	}
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
