#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int singleNumber(vector<int>& nums) {
	unordered_map<int, int> table;
	for (int num: nums) {
		table[num]++;
	}

	for (int num: nums) {
		if (table[num] == 1) return num;
	}

	return 0;
}

int main(int argc, const char** argv) {
	vector<int> nums = {1, 2, 3, 4};
	singleNumber(nums);
    return 0;
}
