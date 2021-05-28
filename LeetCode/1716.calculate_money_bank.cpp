#include <iostream>

using namespace std;

int totalMoney(int n) {
	int result = 0;
	int nWeeks = n / 7;

	for (int i = 0; i < nWeeks; i++) {
		result += ((i+7)*(i+8))/2 - (i*(i+1))/2;
	}

	if (n % 7 != 0) {
		int start = nWeeks+1;
		int end = n - nWeeks*7;

		result += ((start+end)*(start+end-1))/2 - (start*(start-1))/2;
	}

	return result;
}

int main(int argc, const char** argv) {
	cout << totalMoney(7) << endl;
    return 0;
}
