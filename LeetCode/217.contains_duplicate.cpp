#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {	
	unordered_map<int, int> table;

	for (int num: nums) {
		table[num]++;
	}

	auto it = table.begin();

	for (; it != table.end(); it++) {
		if (it->second >= 2) return true;
	}
	return false;
}

bool containsDuplicatev2(vector<int>& nums) {
	unordered_set<int> setInts;

	for (int num: nums) {
		setInts.insert(num);
	}
	return setInts.size() < nums.size();
}
