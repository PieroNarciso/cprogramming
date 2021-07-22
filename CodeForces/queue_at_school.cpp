#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/266/B

int n, t;
string queue;

void solve() {
	cin >> n >> t >> queue;

	int i = 0;
	while (t--) {
		while (i < n-1) {
			if (queue[i] == 'B' && queue[i+1] == 'G') {
				swap(queue[i], queue[i+1]);
				i += 2;
			} else {
				i++;
			}
		}
		i = 0;
	}
	cout << queue << endl;
}

int main(int argc, const char** argv) {
	solve();
	return 0;
}
