#include <bits/stdc++.h>
using namespace std;

void solve() {
	unordered_set<char> st;

	string s;
	char c = '0';

	while (c != '}') {
		cin >> s;
		c = s[s.size()-1];

		if (c == '}' && st.empty() && s.size() == 2) {
			cout << 0;
			return;
		}

		if (s.size() == 3) {
			st.insert(s[1]);
		} else if (s.size() == 2) {
			st.insert(s[0]);
		}

	}
	cout << st.size();

}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
