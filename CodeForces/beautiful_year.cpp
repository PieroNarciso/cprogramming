// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;


bool isDistinct(int year) {
	unordered_set<int> s;
	
	while (year) {
		int d = year % 10;
		year /= 10;
		if (s.find(d) == s.end()) {
			s.insert(d);
		} else {
			return false;
		}
	}
	return true;
}

void solve() {
	int year;
	cin >> year;

	while (year++) {
		if (isDistinct(year)) {
			cout << year;
			return;
		}
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
