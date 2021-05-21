#include <iostream>

using namespace std;

bool isSubsequence(string s, string t) {
	int i, j;
	i = 0;
	j = 0;

	while (i < s.size() && j < t.size()) {
		if (s[i] == t[j]) {
			i++;
		}
		j++;
	}
	return i == s.size();
}

int main(int argc, const char** argv) {
	cout << isSubsequence("acb", "asdfjk2erbasdfc") << endl;
    return 0;
}
