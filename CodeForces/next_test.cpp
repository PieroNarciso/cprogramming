#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int SIZE = 3001;
	bool arr[SIZE];

	for (int i = 0; i < SIZE; ++i) {
		arr[i] = false;
	}

	int e;
	for (int i = 0; i < n; ++i) {
		cin >> e;

		arr[e-1] = true;
	}

	for (int i = 0; i < SIZE; ++i) {
		if (arr[i] == false) {
			cout << i+1;
			return;
		}
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
