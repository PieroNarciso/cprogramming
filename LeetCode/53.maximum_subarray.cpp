#include <bits/stdc++.h>
using namespace std;


int maxSubArray(vector<int>& nums) {
	int best = -1e5;
	int sum = 0;

	for (auto num: nums) {
		sum = max(num, sum+num);	
		best = max(best, sum);
	}
	return best;
}
