#include <iostream>

// https://codeforces.com/problemset/problem/200/B

using namespace std;

int n;

void solve() {
	cin >> n;

	float sum = 0.0;
	int e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		sum += e;
	}

	cout << sum/n << endl;
}


int main(int argc, const char** argv) {
	solve();
    return 0;
}
