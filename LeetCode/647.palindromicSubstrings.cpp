#include <iostream>
#include <cmath>

using namespace std;


int countPalindromsFromMiddle(string &s, int left, int right) {	
	if (s.size() == 0 && left > right) return 0;

	while (left >= 0 && right < s.size() && s[left] == s[right]) {
		left--;
		right++;
	}
	return ceil((right - left) / 2);
}

int countSubstrings(string s) {
	if (s.size() == 1) return 1;
	int count = 0;

	for (int mid = 0; mid < s.size(); mid++) {
		int count1 = countPalindromsFromMiddle(s, mid, mid);
		int count2 = countPalindromsFromMiddle(s, mid, mid+1);
		count += count1 + count2;
	}

	return count;
}


int main(int argc, const char** argv) {
	cout << countSubstrings("aaa") << endl;
    return 0;
}
