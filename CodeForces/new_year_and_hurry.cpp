#include <iostream>

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;

	int total = 0;
	int i = 1;
	for (; i <= n; ++i) {
		total += 5*i;
		if (total + k > 240) {
			cout << i-1 << endl;
			return;
		}
	}
	cout << i-1 << endl;
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
