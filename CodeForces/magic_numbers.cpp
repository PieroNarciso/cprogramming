#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int curr = 0;

	int i = 1;
	while (n && curr <= 144) {
		int lastDigit = n % 10;
		curr += lastDigit*i;
		i *= 10;

		if (curr == 1 || curr == 14 || curr == 144) {
			curr = 0;
			i = 1;
		}
		n /= 10;
	}
	if (n || curr) {
		cout << "NO";
	} else {
		cout << "YES";
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
