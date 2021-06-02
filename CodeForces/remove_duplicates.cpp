// https://codeforces.com/problemset/problem/978/A
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	vector<int> result;
	unordered_set<int> set;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n-1; i >= 0; i--) {
		if (set.find(a[i]) == set.end()) {
			result.push_back(a[i]);
			set.insert(a[i]);
		}
	}
	cout << result.size() << endl;
	for (int i = result.size()-1; i >= 0; i--) {
		cout << result[i] << " ";
	}
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
