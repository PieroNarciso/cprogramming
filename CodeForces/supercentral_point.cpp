#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;
	int arr[n][2];

	for (int i = 0; i < n; ++i) {
		cin >> arr[i][0] >> arr[i][1];
	}

	bool r, l, t, b;
	int count = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i != j) {
				if (arr[j][0] > arr[i][0] && arr[i][1] == arr[j][1]) r = true;
				if (arr[j][0] < arr[i][0] && arr[i][1] == arr[j][1]) l = true;
				if (arr[j][0] == arr[i][0] && arr[i][1] < arr[j][1]) b = true;
				if (arr[j][0] == arr[i][0] && arr[i][1] > arr[j][1]) t = true;
			}
		}
		if (r && l && t && b) {
			count++;
		}
		r = l = t = b = false;
	}
	cout << count << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
