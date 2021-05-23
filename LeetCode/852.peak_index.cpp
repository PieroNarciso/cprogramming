#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int left, int right) {
	if (arr.size() == 1) return 0;
	if (arr.size() == 2) {
		if (arr[0] <= arr[1]) {
			return 1;
		} else {
			return 0;
		}
	}
	int mid = (right + left)/2;
	if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
		return mid;
	}
	if (arr[mid] < arr[mid-1]) {
		//Left
		return binarySearch(arr, left, mid);
	}
	if (arr[mid] < arr[mid+1]) {
		// Right
		return binarySearch(arr, mid, right);
	}
	return mid;
}

int peakIndexInMountainArray(vector<int>& arr) {
	return binarySearch(arr, 0, arr.size()-1);	
}

int main(int argc, const char** argv) {
	vector<int> test = {5, 5, 5, 7, 5, 6};
	cout << peakIndexInMountainArray(test) << endl;
    return 0;
}
