#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];


	pair<int, int> p = {0, 0};
	for (int i = 1; i <= n; ++i) {
		int left = (i-1)%n;
		int right = i%n;
		if (p.first == 0 && p.second == 0)	 {
			p = pair<int, int>(left, right);
		} else if (abs(arr[left] - arr[right]) < abs(arr[p.first] - arr[p.second])) {
			p = pair<int, int>(left, right);
		}
	}
	cout << p.first+1 << " " << p.second+1;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
