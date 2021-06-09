#include <bits/stdc++.h>
using namespace std;

void solve() {
	int w;
	cin >> w;
	if (w & 1) cout << "NO";
	else {
		if (w > 3) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}

}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
