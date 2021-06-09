// https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s1;
	string s2;
	string joke;
	cin >> s1 >> s2 >> joke;

	unordered_map<char, int> normal;
	unordered_map<char, int> jokeCount;
	for (char& c: s1) {
		normal[c]++;
	}
	for (char& c: s2) {
		normal[c]++;
	}

	for (char& c: joke) {
		jokeCount[c]++;
	}

	if (normal.size() != jokeCount.size()) {
		cout << "NO";
		return;
	}

	for (auto& it: jokeCount) {
		if (!normal[it.first] || normal[it.first] != it.second) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
