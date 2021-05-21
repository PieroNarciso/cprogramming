#include <iostream>
#include <unordered_map>

using namespace std;

bool isPalindrome(string s) {
	int i, j;
	i = 0;
	j = s.size() - 1;

	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

/**
 * O(n^3)
 */
string longestPalindrome(string s) {
	unordered_map<string, int> memo;

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			string currentSbtr = s.substr(i, j+1);
			memo[currentSbtr] = currentSbtr.size();
		}
	}

	string longest = "";
	unordered_map<string, bool> isPalTable;
	for (auto it: memo) {
		if (it.second >= longest.size() && isPalindrome(it.first)){
			longest = it.first;
		}
	}
	return longest;
}


/**
 * Improve palindrome check
 */
string longestPalindromeV2(string s) {
	unordered_map<string, bool> memo;
	string longest = "";


	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			string currentSbtr = s.substr(i, j+1);
			if (!memo.count(currentSbtr) &&
				currentSbtr.size() >= longest.size())
			{
				memo[currentSbtr] = isPalindrome(currentSbtr);
				if (memo[currentSbtr]) {
					longest = currentSbtr;
				}
			}
		}
	}
	return longest;

}

int expandFromMiddle(string &s, int left, int right) {
	if (s.empty() || left > right) return 0;

	while (left >= 0 && right < s.size() && s[left] == s[right]) {
		left--;
		right++;
	}
	return right - left - 1;
}


/**
 * O(n^2)
 */
string longestPalindromeV3(string s) {
	if (s.size() <= 1) return s;

	int start = 0, end = 0;

	for (int i = 0; i < s.size(); i++) {
		int firstWord = expandFromMiddle(s, i, i);
		int secondWord = expandFromMiddle(s, i, i+1);
		int len = max(firstWord, secondWord);
		if (len > (end-start)) {
			start = i - ((len-1) / 2);
			end = i + (len / 2);
		}
	}
	return s.substr(start, end - start + 1);
}





int main(int argc, const char** argv) {
	cout << longestPalindromeV3("civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth") << endl;
    return 0;
}
