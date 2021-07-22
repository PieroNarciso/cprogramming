#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
	int i = 0;
	int pos = 0;
	while (pos >= i && i < nums.size()) {
		pos = max(pos, i+nums[i]);
		i++;
	}
	if (pos < nums.size()-1) {
		return false;
	} else {
		return true;
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
