#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;

	int count = 0;
	int i = 1;
	while (i < n) {
		if (s[i] == s[i-1]) {
			i++;
			count++;
		} else {
			i++;
		}
	}
	cout << count << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
