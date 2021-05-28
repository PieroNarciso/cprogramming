#include <iostream>

using namespace std;

int number = 0;

int numberOfMatches(int n) {
	if (n == 1) return number;
	// Odd
	if (n & 1) {
		number += (n-1)/2;
		return numberOfMatches((n-1)/2 + 1);
	} else {
		// Even
		number += n/2;
		return numberOfMatches(n/2);
	}
}


int main(int argc, const char** argv) {
	cout << numberOfMatches(7) << endl;
    return 0;
}
