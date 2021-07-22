#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	int result = 0;
	int sum = a+b+c;
	bool aOne = a == 1? true: false;
	bool bOne = b == 1? true: false;
	bool cOne = c == 1? true: false;

	if (!(aOne || bOne || cOne)) {
		cout << a*b*c;
		return;
	}

	if (aOne && cOne) {
		cout << sum;
		return;
	}
	if (bOne) {
		if (a > c) {
			cout << a*(b+c);
		} else {
			cout << (a+b)*c;
		}
		return;
	}

	if (aOne) {
		cout << (a+b)*c;
	} else {
		cout << a*(b+c);
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
