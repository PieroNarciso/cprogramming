#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s1, s2;
	cin >> s1 >> s2;	


	for (int i = 0; i < s1.size(); ++i) {
		if (tolower(s1[i]) < tolower(s2[i])) {
			cout << -1;
			return;
		} else if (tolower(s1[i]) > tolower(s2[i])) {
			cout << 1;
			return;
		}
	}
	cout << 0;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
