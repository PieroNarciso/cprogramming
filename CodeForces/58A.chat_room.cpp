#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string hello = "hello";
	int i = 0;
	int j = 0;
	while (i < hello.size() && j < s.size()) {
		if (hello[i] == s[j]) {
			i++;
			j++;
		} else {
			j++;
		}
	}
	if (i == hello.size()) {
		cout << "YES";
	} else cout << "NO";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
