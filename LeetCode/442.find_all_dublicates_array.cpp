#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
	vector<int> result;
	for (int num: nums) {
		int absNum = abs(num);
		if ((nums[absNum-1]) < 0) {
			result.push_back(absNum);
		} else {
			nums[absNum-1] = nums[absNum-1] * -1;
		}
	}
	return result;
}

int main(int argc, const char** argv) {
	vector<int> test = {4, 3, 2, 7, 8, 2, 3, 1};

	vector<int> result = findDuplicates(test);
	for (auto el: result) {
		cout << el << " ";
	}
	cout << endl;
    return 0;
}
