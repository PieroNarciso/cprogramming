#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int result = 0;

	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s[1] == '-' && (s[0] == '-' || s[2] == '-')) {
			result--;
		}
		else if (s[1] == '+' && (s[0] == '+' || s[2] == '+')) {
			result++;
		}
	}

	cout << result;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
