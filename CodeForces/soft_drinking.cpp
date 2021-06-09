// http://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n , k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int totalml = l*k;
	int totalSlices = d*c;

	int maxByDrink = totalml / nl;
	int maxBySlice = totalSlices;
	int maxBySalt = p / np;

	cout << min(maxByDrink, min(maxBySlice, maxBySalt))/n << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
