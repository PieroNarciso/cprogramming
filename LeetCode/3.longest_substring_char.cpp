#include <iostream>
#include <unordered_set>

using namespace std;


int legthOfLongestSubtring(string s) {
	if (s.empty()) return 0;
	if (s.size() == 1) return 1;

	int maxLen = 0;
	unordered_set<char> seen;
	int i = 0, j = 0;
	while (i < s.size()) {
		if (seen.find(s[i]) == seen.end()) {
			seen.insert(s[i]);
			if (seen.size() > maxLen) {
				maxLen = seen.size();
			}
			i++;
		} else {
			seen.erase(s[j]);
			j++;
		}
	}
	
	return maxLen;
}

int main(int argc, const char** argv) {
	cout << legthOfLongestSubtring("dvdf") << endl;
    return 0;
}
