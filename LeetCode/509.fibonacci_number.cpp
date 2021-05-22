#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo;

int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	if (memo.find(n) != memo.end()) {
		return memo[n];
	}
	memo[n] = fib(n-1) + fib(n-2);
	return memo[n];
}

int main(int argc, const char** argv) {
	cout << fib(25) << endl;
    return 0;
}
