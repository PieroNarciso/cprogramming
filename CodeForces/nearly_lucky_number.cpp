// http://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n;
	cin >> n;

	int count = 0;
	while (n) {
		int d = n % 10;
		n /= 10;
		if (d == 4 || d == 7) count++;
	}
	
	if (count == 4 || count == 7) cout << "YES";
	else cout << "NO";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
