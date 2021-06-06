// https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s1;
	string s2;
	cin >> s1 >> s2;

	int i = 0;
	while (i < s1.size() || i < s2.size()) {
		if (s1[i] != s2[i]) {
			cout << '1';
		} else {
			cout << '0';
		}
		i++;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
