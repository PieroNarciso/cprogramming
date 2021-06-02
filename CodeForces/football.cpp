// https://codeforces.com/problemset/problem/96/A
#include <iostream>


using namespace std;

void solve() {
	string players;
	cin >> players;

	int count = 0;
	char current = '0';
	for (char& c: players) {
		if (c != current) {
			count = 1;
			current = c;
		} else {
			count++;
		}
		if (count == 7) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}


int main(int argc, const char** argv) {
	solve();
    return 0;
}
