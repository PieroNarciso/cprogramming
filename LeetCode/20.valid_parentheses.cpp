#include "iostream"
#include "stdio.h"
#include <unordered_map>
#include <vector>
#include <utility>

using namespace std;

bool isValid(string s) {
    if (s.length() == 1) return false;
    unordered_map<char, char> table;
    table.insert({'}', '{'});
    table.insert({')', '('});
    table.insert({']', '['});

    vector<char> stack;

    for (char c: s) {
	if (table[c]) {
	    if (stack.empty()) return false;
	    char closingBracket = stack.back();
	    stack.pop_back();
	    if (closingBracket != table[c]) return false;
	} else {
	    stack.push_back(c);
	}
    }
    if (!stack.empty()) return false;
    return true;
}

int main(int argc, const char** argv) {
    bool result = isValid("[[]]");
    cout << result << endl;
    return 0;
}
