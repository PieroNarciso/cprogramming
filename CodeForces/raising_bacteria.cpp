// https://codeforces.com/problemset/problem/579/A
#include <iostream>

using namespace std;


int main(int argc, const char** argv) {
	int n;
	cin >> n;

	int count = 0;
	while (n > 0) {
		if (n & 1) {
			n--;
			count++;
		} else {
			n /= 2;
		}
	}
	cout << count;
    return 0;
}
