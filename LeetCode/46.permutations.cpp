#include <iostream>
#include <vector>

using namespace std;

void permute(vector<int>& nums, vector<vector<int>>& result, int i) {
	if (nums.size() == i) {
		result.push_back(nums);
		return;
	}
	for(int j = i; j < nums.size(); j++) {
		swap(nums[i], nums[j]);
		permute(nums, result, i+1);
		swap(nums[i], nums[j]);
	}
}

vector<vector<int>> permute(vector<int>& nums) {
	vector<vector<int>> result;
	permute(nums, result, 0);
	return result;
}


int main(int argc, const char** argv) {
	vector<int> nums = {1, 2, 3};
	vector<vector<int>> result = permute(nums);
	for (auto& numarr: result) {
		for (int& num: numarr) {
			cout << num << ", ";
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}
