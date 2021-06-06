// http://codeforces.com/problemset/problem/227/B
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arrn[n];
	for (int i = 0; i < n; ++i)
		cin >> arrn[i];
	int m;
	cin >> m;
	int arrm[m];
	for (int i = 0; i < m; ++i)
		cin >> arrm[i];


	// num: <from-left, from right>
	unordered_map<int, pair<int, int>> mp;
	for (int i = 0; i < n; ++i) {
		mp[arrn[i]] = pair<int, int>(i+1, n-i);
	}

	pair<long long, long long> result = {0, 0};
	for (auto e: arrm) {
		result.first += mp[e].first;
		result.second += mp[e].second;
	}

	cout << result.first << " " << result.second;

}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
