#include <iostream>
#include <unordered_map>

using namespace std;

int climbRecursive(int n, unordered_map<int, int> &memo) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (memo.find(n) != memo.end()) {
		return memo[n];
	}
	memo[n] = climbRecursive(n-1, memo) + climbRecursive(n-2, memo);
	return memo[n];
}

int climbStairs(int n) {
	unordered_map<int, int> memo;
	return climbRecursive(n, memo);
}


int main(int argc, const char** argv) {
	cout << climbStairs(44) << endl;
    return 0;
}
