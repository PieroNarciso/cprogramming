#include <iostream>
#include <vector>


using namespace std;

int singleNonDuplicate(vector<int>& nums) {
	if (nums.empty()) return 1;
	if (nums.size() == 1) return nums[0];
	int result;
	int i = 0;
	while (i < nums.size()) {
		if (nums[i] != nums[i+1]) {
			return nums[i];
		}
		i += 2;
	}
	return 0;
}

int binarySearch(vector<int>& nums, int start, int end) {
	if (end - start == 2) {
		if (nums[start] == nums[start+1]) return nums[end];
		return nums[start];
	}
	int mid = (start+end)/2;
	if (nums[mid] == nums[mid-1]) {
		if ((end-mid) % 2 == 0) {
			// Left
			return binarySearch(nums, start, mid-2);
		} else {
			// Right
			return binarySearch(nums, mid+1, end);
		}
	} else if (nums[mid] == nums[mid+1]){
		if ((end-mid-1) % 2 == 0) {
			// Left
			return binarySearch(nums, start, mid-1);
		} else {
			// Right
			return binarySearch(nums, mid+2, end);
		}
	} else {
		return nums[mid];
	}
}

int singleNonDuplicateBinarySearch(vector<int>& nums) {
	if (nums.size() == 1) {
		return nums[0];
	}
	if (nums[0] != nums[1]) return nums[0];
	else {
		return binarySearch(nums, 0, nums.size()-1);
	}
}

int main(int argc, const char** argv) {
	vector<int> test = {1, 2, 2, 3, 3};
	cout << singleNonDuplicateBinarySearch(test) << endl;
    return 0;
}
