#include <bits/stdc++.h>

using namespace std;


int jump(vector<int>& nums) {
	vector<int> nJumps(nums.size(), INT_MAX);
	nJumps[0] = 0;

	for (int i = 1; i < nums.size(); ++i) {
		for (int j = 0; j < i; ++j) {
			if (nums[j]>=i-j) {
				nJumps[i] = min(nums[j]+1, nJumps[i]);
			}
		}
	}
	return nJumps.back();
}

int jumpGreedy(vector<int>& nums) {
	int nJumps = 0;
	int right = 0;
	int left = 0;
	if (nums.size() == 1) {
		return 0;
	}

	for (int i = 0; i < nums.size()-1; ++i) {
		right = max(right, nums[i]+i);
		if (i == left) {
			nJumps++;
			left = right;
		}
	}
	return nJumps;
}

int main(int argc, const char** argv) {
	vector<int> nums = {2, 3, 1, 1, 4};
	vector<int> nums2 = {2, 3, 0, 1, 4};
	vector<int> nums3 = {2, 0 , 0};
	vector<int> nums4 = {0};
	cout << jumpGreedy(nums) << '\n';
	cout << jumpGreedy(nums2) << '\n';
	cout << jumpGreedy(nums3) << '\n';
	cout << jumpGreedy(nums4) << '\n';
    return 0;
}
