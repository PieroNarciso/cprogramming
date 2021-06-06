// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int N = 5;
	int mat[N][N];
	int e;

	pair<int, int> idx = {0, 0};

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> e;
			if (e == 1) {
				idx = {i, j};
			}
			mat[i][j] = e;
		}
	}

	cout << abs(2 - idx.first) + abs(2 - idx.second);
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}
