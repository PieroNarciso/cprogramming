#include <iostream>

using namespace std;

int uniquePathsRecursive(int m, int n) {
	if (m == 1 || n == 1) return 1;
	return uniquePathsRecursive(m-1, n) + uniquePathsRecursive(m, n-1);
}

int uniquePathsDP(int m, int n) {
	int dp[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
	}
	return dp[m][n];
}

int main(int argc, const char** argv) {
	cout << uniquePathsRecursive(51, 9) << endl;
    return 0;
}
