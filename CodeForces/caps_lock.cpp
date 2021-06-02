// https://codeforces.com/problemset/problem/131/A
#include <iostream>

using namespace std;


int main(int argc, const char** argv) {
	string input;
	cin >> input;

	bool change = true;

	for (int i = 1; i < input.size(); i++) {
		if (input[i] >=97) {
			change = false;
			break;
		}
	}

	if (change) {
		for (char& c: input) {
			if (c >= 97 && c <=122) {
				c = c-32;
			} else if (c >= 65 && c <= 90) {
				c += 32;
			}
		}
	}
	cout << input;
    return 0;
}
