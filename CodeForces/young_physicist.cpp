// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;

	int x = 0, y = 0, z = 0;
	for (int i = 0; i < n; ++i) {
		int xi, yi, zi;
		cin >> xi;
		cin >> yi;
		cin >> zi;
		x += xi;
		y += yi;
		z += zi;
	}
	
	if (x || y || z) cout << "NO";
	else cout << "YES";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
