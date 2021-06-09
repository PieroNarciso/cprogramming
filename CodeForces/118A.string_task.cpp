#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	string result = "";
	cin >> s;
	unordered_set<char> set = {'a', 'e', 'i', 'o', 'u', 'y','A', 'E', 'I', 'O', 'U', 'Y'};

	for (int i = 0; i < s.size(); ++i) {
		if (set.find(s[i]) == set.end()) {
			result += '.';
			result += tolower(s[i]);
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
