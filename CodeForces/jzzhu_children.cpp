// https://codeforces.com/problemset/problem/450/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	int e;
	list<pair<int, int>> ll;
	for (int i = 0; i < n; ++i) {
		cin >> e;
		ll.push_back(pair<int, int>(e, i+1));
	}

	pair<int, int> lastPop = {0, 0};
	while (!ll.empty()) {
		auto f = ll.front();
		if (f.first <= m) {
			lastPop = ll.front();
			ll.pop_front();
		} else {
			f.first -= m;
			ll.push_back(make_pair(f.first, f.second));
			ll.pop_front();
		}
	}
	cout << lastPop.second << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
