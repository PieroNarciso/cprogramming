#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	
	vector<int> v;
	for (char& c: s) {
		if (c != '+') {
			v.push_back(c - '0');
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
		if (i != v.size()-1) {
			cout << '+';
		}
	}
	cout << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
