#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];

	pair<int, int> p = {-1, -1};
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (p.first == -1 && p.second == -1) {
			p.first = arr[i];
			p.second = i;
		} else {
			if (arr[i] < p.first) {
				p.first = arr[i];
				p.second = i;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		if (p.first == arr[i] && p.second != i) {
			cout << "Still Rozdil";
			return;
		}
	}
	cout << p.second+1;

}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
