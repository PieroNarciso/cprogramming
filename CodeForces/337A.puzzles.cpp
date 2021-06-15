#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	
	int arr[m];

	for (int i = 0; i < m; ++i) {
		cin >> arr[i];
	}

	sort(arr, arr+m);
	
	int left = 0;
	int right = n-1;

	int min = arr[right]-arr[left];

	while (right < m) {
		if (arr[right] - arr[left] < min) {
			min = arr[right] - arr[left];
		}
		left++;
		right++;
	}
	cout << min;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
