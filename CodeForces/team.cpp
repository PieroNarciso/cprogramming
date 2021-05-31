#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/231/A

int n;
int res;
void solve() {
	cin >> n;
	int result = 0;

	for (int i = 0; i < n; i++) {
		int innerCount = 0;
		for (int j = 0; j < 3; j++) {
			cin >> res;
			if (res == 1) {
				innerCount++;
			}
		}
		if (innerCount >=2)
			result++;
	}
	cout << result << endl;
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
