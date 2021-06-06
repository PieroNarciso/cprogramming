// https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string borzeCode;
	cin >> borzeCode;

	int i = 0;
	while (i < borzeCode.size()) {
		if (borzeCode[i] == '.') {
			i++;
			cout << '0';
			continue;
		} else if (borzeCode[i] == '-' && borzeCode[i+1] == '.') {
			cout << '1';
		} else if (borzeCode[i] == '-' && borzeCode[i+1] == '-') {
			cout << '2';
		}
		i += 2;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
