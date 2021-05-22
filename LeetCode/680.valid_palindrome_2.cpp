#include <iostream>

using namespace std;

bool validPalindrome(string s) {
	if (s.size() <= 1) return true;
	int start = 0;
	int end = s.size() - 1;

	int count = 0;
	while (start < end && count <= 1) {
		if (s[start] != s[end]) {
			end--;
			count++;
		} else if (s[start] == s[end]) {
			end--;
			start++;
		}
	}
	if (count <= 1) {
		return true;
	} else {
		start = 0;
		end = s.size() - 1;
		count = 0;
		while (start < end && count <= 1) {
			if (s[start] != s[end]) {
				start++;
				count++;
			} else if (s[start] == s[end]) {
				end--;
				start++;
			}
		}
		if (count <= 1) return true;
		return false;
	}
}

int main(int argc, const char** argv) {
	cout << validPalindrome("aba") << " " << true << endl;
	cout << validPalindrome("abca") << " " << true << endl;
	cout << validPalindrome("abc") << " " << false << endl;
	cout << validPalindrome("a") << " " << true << endl;
	cout << validPalindrome("racecar") << " " << true << endl;
	cout << validPalindrome("rececab") << " " << false << endl;
	cout << validPalindrome("deeeee") << " " << true << endl;
    return 0;
}
