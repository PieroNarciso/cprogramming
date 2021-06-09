#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, k;
	cin >> n >> k;

	long long odd = (k*2)-1;

	if (odd > n) {
		if (n & 1) {
			cout << odd - n;
			return;
		} else {
			cout << odd - (n - 1);
			return;
		}
	} else {
		cout << odd;
		return;
	}
}


int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
