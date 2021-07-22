#include <bits/stdc++.h>
using namespace std;

int n;
unordered_set<int> st;
void solve() {
	cin >> n;
	int val;
	int p;
	cin >> p;
	for (int i = 0; i < p; ++i) {
		cin >> val;
		st.insert(val);
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> val;
		st.insert(val);
	}

	if (st.size() == n) {
		cout << "I become the guy." << endl;
	} else {
		cout << "Oh, my keyboard!" << endl;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
