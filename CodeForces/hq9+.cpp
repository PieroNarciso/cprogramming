#include <bits/stdc++.h>
using namespace std;

void solve() {
	string p;
	cin >> p;
	for (char& c: p) {
		if (c == 'H' || c == 'Q' || c == '9') {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
