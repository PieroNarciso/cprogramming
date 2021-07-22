#include <iostream>
#include <vector>


using namespace std;

void plusMinus(vector<int> arr) {
	int positive = 0;
	int negative = 0;
	int zero = 0;
	for (int& e: arr) {
		if (e > 0) positive++;
		else if (e == 0) zero++;
		else negative++;
	}
	float total = positive+negative+zero;
	printf("%.6f\n", positive/total);
	printf("%.6f\n", negative/total);
	printf("%.6f\n", zero/total);
}


int main(int argc, const char** argv) {
	int size;
	cin >> size;
	vector<int> arr;
	for (int i = 0; i < size; i++) {
		int e;
		cin >> e;
		arr.push_back(e);
	}
	plusMinus(arr);
    return 0;
}
