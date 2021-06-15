#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	int e;
	for (int i = 0; i < n; ++i) {
		cin >> e;
		arr[e-1] = i+1;
	}

	for (int e: arr) {
		cout << e << " ";
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
