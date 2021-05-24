#include <iostream>

int guess(int num);


long long binarySearch(long long left, long long right) {
	if (right - left == 1) {
		if (guess(left) == 0) return left;
		if (guess(right) == 0) return right;
	}
	long long mid = (right+left)/2;
	if (guess(mid) == -1) {
		return binarySearch(left, mid);
	} else if (guess(mid) == 1) {
		return binarySearch(mid, right);
	} else {
		return mid;
	}
}

int guessNumber(int n) {
	if (n <= 1) return n;	
	return binarySearch(1, n);
}

int main(int argc, const char** argv) {
    return 0;
}
