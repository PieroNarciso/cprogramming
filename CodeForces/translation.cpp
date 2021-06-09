#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s, t;
	cin >> s >> t;

	int i = 0;
	int j = t.size()-1;
	while (i < s.size() && j >= 0) {
		if (s[i] != t[j]) {
			cout << "NO";
			return;
		}
		i++;
		j--;
	}
	cout << "YES";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
