#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;

	int val = 0;
	if ((n/m)*b <= ((n/m)*m)*a) {
		val = (n/m)*b;
	} else {
		val = (n/m)*m*a;
	}
	n -= (n/m)*m;

	if (b <= n*a) {
		val += b;
	} else {
		val += n*a;
	}


	cout << val << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
