#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/1030/A

int n;

void solve() {
	cin >> n;
	int persons[n];
	for (int i = 0; i < n; i++) {
		cin >> persons[i];
	}

	for (int res: persons) {
		if (res == 1) {
			cout << "HARD" << endl;
			return;
		}
	}
	cout << "EASY" << endl;
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
