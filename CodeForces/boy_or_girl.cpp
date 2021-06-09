// http://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	unordered_set<char> set;

	for (char c: s) {
		set.insert(c);
	}

	if (set.size() & 1) {
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
