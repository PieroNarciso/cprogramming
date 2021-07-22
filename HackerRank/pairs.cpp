// https://www.hackerrank.com/challenges/pairs/problem
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int pairs(int k, vector<int> arr) {
	sort(arr.begin(), arr.end());
	int count = 0;
	int i = 0;
	int j = 1;
	while (j < arr.size()) {
		if (arr[j] - arr[i] == k) {
			count++;
			i++;
			j++;
		} else if (arr[j] - arr[i] > k) {
			if (i == j) {
				j++;
			} else{
				i++;
			}
		} else {
			j++;
		}
	}
	return count;
}

int main(int argc, const char** argv) {
	vector<int> test = {1, 5, 3, 4, 2};
	cout << pairs(2, test) << endl;
    return 0;
}
