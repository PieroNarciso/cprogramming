#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
	unordered_map<int, int> ht;

	for (auto& num: nums)
		ht[num]++;

	int count = 0;
	for (auto& e: ht)
		count += (e.second * (e.second - 1))/2;
	return count;
}

int main(int argc, const char** argv) {
    return 0;
}
