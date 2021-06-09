// https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	unordered_set<int> diff;
	int e;
	for (int i = 0; i < 4; ++i) {
		cin >> e;
		diff.insert(e);
	}

	cout << 4 - diff.size() << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
