#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
	vector<string> patterns;

	for (string word : words) {
		unordered_map<char, char> match;
		unordered_map<char, char> matchReverse;

		bool goesToPatterns = true;
		for (int i = 0; i < word.size(); i++) {
			if (match.find(word[i]) != match.end() && 
				matchReverse.find(pattern[i]) != matchReverse.end()) {
				if (match[word[i]] != pattern[i] || matchReverse[pattern[i]] != word[i]) {
					goesToPatterns = false;
					break;
				}
			} else if (match.find(word[i]) == match.end() && 
					   matchReverse.find(pattern[i]) == matchReverse.end()) {
				match[word[i]] = pattern[i];
				matchReverse[pattern[i]] = word[i];
			} else {
				goesToPatterns = false;
				break;
			}
		}
		if (goesToPatterns) {
			patterns.push_back(word);
		}
	}
	return patterns;
}

int main(int argc, const char** argv) {
	vector<string> words = {"a", "b" , "c"};
	vector<string> result = findAndReplacePattern(words, "a");
	for (string word: result) {
		cout << word << ", ";
	}
	cout << endl;
    return 0;
}
