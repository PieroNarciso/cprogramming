#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	unordered_map<string, int> mp;

	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		mp[s]++;
	}

	string result;
	for (auto& it: mp) {
		if (result.empty()) {
			result = it.first;
		} else if (it.second > mp[result]) {
			result = it.first;
		}
	}
	cout << result;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
