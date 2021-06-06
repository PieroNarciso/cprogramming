#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[7];
	for (int i = 0; i < 7; ++i) {
		cin >> arr[i];
	}


	int lastDay = 0;
	while (n) {
		for (int& e: arr) {
			if (e >= n) {
				cout << ++lastDay;
				return;
			}
			n -= e;
			lastDay++;
		}
		lastDay = 0;
	}
	cout << lastDay;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
