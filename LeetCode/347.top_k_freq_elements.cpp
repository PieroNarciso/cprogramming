#include <iostream>
#include <unordered_map>
#include <queue>


using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
	vector<int> result;
	// map< val, freq >
	unordered_map<int, int> mp;
	// pair< freq, val >
	priority_queue<pair<int, int>> freq;

	for (auto& num: nums) {
		mp[num]++;
	}
	for (auto& it: mp) {
		freq.push(make_pair(it.second, it.first));
	}
	while (k--) {
		result.push_back(freq.top().second);
		freq.pop();
	}

	return result;
}


int main(int argc, const char** argv) {
	/* vector<int> nums = {1, 1, 1, 2, 2, 3}; */
	vector<int> nums = {1};
	vector<int> result = topKFrequent(nums, 1);
	for (auto e: result) {
		cout << e << " ";
	}
	cout << endl;
    return 0;
}
