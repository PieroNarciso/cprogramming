#include <iostream>
#include <vector>

using namespace std;


void reverseString(vector<char>& s) {
	int start = 0;
	int finish = s.size() - 1;

	while (start < finish) {
		char tmp = s[start];
		s[start] = s[finish];
		s[finish] = tmp;
		start++;
		finish--;
	}
}

int main(int argc, const char** argv) {
	vector<char> s = {'c'};
	reverseString(s);
	for (char c : s) {
		cout << c << " ";
	}
	cout << endl;
    return 0;
}
