#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << 4*(sqrt(a*b/c) + sqrt(b*c/a) + sqrt(a*c/b));
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
