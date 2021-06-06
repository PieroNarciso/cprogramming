// https://codeforces.com/problemset/problem/272/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int e;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> e;
		sum += e;
	}

	
	if (n == 1) {
		if (sum & 1) cout << 3;
		else cout << 2;
	} else {
		int count = 0;
		for (int i = 1; i <= 5; ++i) {
			if (!((sum+i-1)%(n+1) ==0)) {
				count++;
			}
		}
		cout << count;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
