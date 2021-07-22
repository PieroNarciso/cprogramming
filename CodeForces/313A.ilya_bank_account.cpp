#include <bits/stdc++.h>
using namespace std;

int n;
void solve() {
	cin >> n;

	if (n >= 0) {
		cout << n;
		return;
	}

	if (n >= -99) {
		int lastDigit = n % 10;
		if (lastDigit == 0) {
			cout << 0;
			return;
		}
		int lastLast = n / 10;

		cout << -1 * min(abs(lastDigit), abs(lastLast));
		return;
	}

	int lastDigit = n % 10;
	int withoutLastDigit = n / 10;


	int withoutLastLast = (withoutLastDigit/10)*10 + lastDigit;

	cout << max(n, max(withoutLastDigit, withoutLastLast));
	
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
