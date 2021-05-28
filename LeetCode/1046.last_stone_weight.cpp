#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// Max heap solution
int lastStoneWeight(vector<int>& stones) {
	make_heap(stones.begin(), stones.end());

	while(stones.size() > 1) {
		int max1 = stones.front();
		pop_heap(stones.begin(), stones.end());
		stones.pop_back();
		int max2 = stones.front();
		pop_heap(stones.begin(), stones.end());
		stones.pop_back();

		if (max1 != max2) {
			stones.push_back(max1-max2);
			push_heap(stones.begin(), stones.end());
		}
	}
	if (stones.empty()) {
		return 0;
	} else {
		return stones.front();
	}
}

int main(int argc, const char** argv) {
	vector<int> test = {2, 2};
	cout << lastStoneWeight(test) << endl;
    return 0;
}
