#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/71/A

void solve() {
	string word;
	cin >> word;

	if (word.size() > 10) {
		cout << word.front() << to_string(word.size()-2) << word.back() << endl;
	} else {
		cout << word << endl;
	}
}


int main(int argc, const char** argv) {
	int tCases;
	cin >> tCases;

	while(tCases--) {
		solve();
	}
    return 0;
}

