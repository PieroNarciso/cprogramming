#include <iostream>
#include <algorithm>


using namespace std;

void solve() {
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr+n);
	int result = 0;
	int largerSum = 0;
	int i = n-1;
	while (largerSum <= sum) {
		largerSum += arr[i];
		sum -= arr[i];
		result++;
		i--;
	}
	cout << result;
}

int main(int argc, const char** argv) {
	solve();
    return 0;
}
