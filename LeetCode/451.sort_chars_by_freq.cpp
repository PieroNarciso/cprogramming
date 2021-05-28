#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

string frequencySort(string s) {
	priority_queue<pair<int, char>> queue;
	unordered_map<char, int> map;
	for (char& c: s) {
		map[c]++;
	}

	for (auto &iter: map) {
		queue.push(make_pair(iter.second, iter.first));
	}

	string result;

	while (!queue.empty()) {
		pair<int, char> maxPair = queue.top();
		queue.pop();
		for (int i = 0; i < maxPair.first; i++) {
			result.push_back(maxPair.second);
		}
	}
	return result;
}

int main(int argc, const char** argv) {
	cout << frequencySort("tree") << endl;
    return 0;
}
