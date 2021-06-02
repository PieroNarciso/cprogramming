#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
	make_heap(nums.begin(), nums.end());

	k--;
	while (k--) {
		pop_heap(nums.begin(), nums.end());
		nums.pop_back();
	}

	pop_heap(nums.begin(), nums.end());
	return nums.back();
}


int main(int argc, const char** argv) {
	vector<int> nums = {3, 2, 1, 5, 6, 4};
	cout << findKthLargest(nums, 4) << endl;
    return 0;
}
