// https://codeforces.com/contest/1535/problem/A
#include <bits/stdc++.h>
using namespace std;

int s1, s2, s3, s4;
void solve() {
	cin >> s1 >> s2 >> s3 >> s4;

	int maxFirst = max(s1, s2);
	int maxSec = max(s3, s4);

	if ((maxFirst > s3 || maxFirst > s4) && (maxSec > s1 || maxSec > s2)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
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
