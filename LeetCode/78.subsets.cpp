#include <bits/stdc++.h>
using namespace std;


void backtrack(vector<int>& curr, vector<vector<int>>& result, int start, vector<int>& nums) {
	result.push_back(curr);

	for (; start < nums.size(); ++start) {
		curr.push_back(nums[start]);
		backtrack(curr, result, start+1, nums);
		curr.pop_back();
	}
}

vector<vector<int>> subsets(vector<int>& nums) {
	vector<vector<int>> result;
	vector<int> curr = {};
	backtrack(curr, result, 0, nums);
	return result;
}


int main(int argc, const char** argv) {
	vector<int> nums = {1, 2, 3};
	vector<vector<int>> ans = subsets(nums);

	for (auto& vec: ans) {
		for (int& val: vec) {
			cout << val << " ";
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}
