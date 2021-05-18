#include <iostream>

using namespace std;


bool isPalindrome(string s) {
	int init = 0;
	int last = s.size()-1;

	if (s.size() <= 1) {
		return true;
	}

	while (init < last) {
		if (!isalnum(s[init])) {
			init++;
			continue;
		}
		if (!isalnum(s[last])) {
			last--;
			continue;
		}
		if (tolower(s[init]) != tolower(s[last])) {
			return false;
		} else {
			init++;
			last--;
		}
	}
	return true;
}

int main(int argc, const char** argv) {
	cout << isPalindrome("0P") << endl;

    return 0;
}
