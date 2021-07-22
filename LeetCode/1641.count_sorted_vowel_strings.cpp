#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int countVowelStrings(int n) {
	vector<int> v(5, 1);
	for (int i = 1; i < n; ++i) {
		for (int j = 4; j >= 0; j--) {
			v[j] = v[j]+v[j+1];
		}
	}
	return accumulate(v.begin(), v.end(), 0);
}

int main(int argc, const char** argv) {
	cout << countVowelStrings(4) << endl;
    return 0;
}
