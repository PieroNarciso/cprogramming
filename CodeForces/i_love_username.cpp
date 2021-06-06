#include <iostream>
using namespace std;


void solve() {
	int n;
	cin >> n;
	int e;
	int min = 0;
	int max = 0;

	int count = 0;
	for (int i = 0; i < n; ++i) {
		cin >> e;
		if (i == 0) {
			min = e;
			max = e;
		}
		if (e < min) {
			count++;
			min = e;
		}
		if (e > max) {
			count++;
			max = e;
		}
	}

	cout << count << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
