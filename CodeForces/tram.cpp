// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int max = 0;
	int sum = 0;
	int a, b;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		sum += b - a;
		if (sum > max) {
			max = sum;
		}
	}
	cout << max << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
