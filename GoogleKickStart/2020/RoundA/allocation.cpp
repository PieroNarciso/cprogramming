#include <iostream>
#include <algorithm>

using namespace std;

int numHouses, budget, houses[100000];

void solve() {
	cin >> numHouses >> budget;
	for (int i = 0; i < numHouses; i++) {
		cin >> houses[i];
	}
	sort(houses, houses + numHouses);

	int result = 0;
	for (int i = 0; i < numHouses; i++) {
		if (budget >= houses[i]) {
			budget -= houses[i];
			result++;
		}
	}
	cout << result << endl;
}

int main(int argc, const char** argv) {
	int numTest, i=1;

	cin >> numTest;

	while (numTest--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
    return 0;
}
