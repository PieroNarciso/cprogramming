// https://codeforces.com/contest/1514/problem/B
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int n, k;
void solve() {
	cin >> n >> k;

	long long ans = 1;
	for (int i = 0; i < k; ++i) {
		ans = (ans * n) % MOD;
	}
	cout << ans << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}
