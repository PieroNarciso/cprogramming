#include <bits/stdc++.h>
using namespace std;

void solve() {
	string word;
	cin >> word;

	int countUp = 0;
	int countLow = 0;

	for (char& c: word) {
		if (isupper(c)) countUp++;
		else countLow++;
	}

	for (char& c: word) {
		if (countLow >= countUp) {
			c = tolower(c);
		} else {
			c = toupper(c);
		}
	}
	cout << word;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
