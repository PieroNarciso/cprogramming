#include <bits/stdc++.h>
using namespace std;

int n;
void solve() {
	cin >> n;
	int arr[n];
	pair<int, int> max = {0, 0};
	pair<int, int> min = {101, 0};

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (arr[i] > max.first) {
			max = pair<int, int>(arr[i], i);
		}
		if (arr[i] <= min.first) {
			min = pair<int, int>(arr[i], i);
		}
	}

	int swap = 0;

	if (min.second < max.second) {
		min.second++;
	}
	swap = (n-1-min.second) + (max.second);

	cout << swap << endl;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
