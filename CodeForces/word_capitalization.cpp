// https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	string word;

	cin >> word;
	word[0] = toupper(word[0]);
	cout << word;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
