#include <iostream>
#include <vector>


using namespace std;

// O(N*M)
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
	vector<int> result;
	vector<int> noDups;
	int j = 0;
	noDups.push_back(ranked[0]);
	for (int i = 1; i < ranked.size(); i++) {
		if (ranked[i] != noDups[j]) {
			noDups.push_back(ranked[i]);
			j++;
		}
	}

	for (int& e: player) {
		for (int i = noDups.size()-1; i >= 0; i--) {
			if (e < noDups[i] && i+1 != noDups.size()) {
				result.push_back(i+2);
				break;
			} else if (e < noDups[i] && e > noDups[i+1]) {
				result.push_back(i+2);
				break;
			} else if (e == noDups[i] && e > noDups[i+1]) {
				result.push_back(i+1);
				break;
			} else if (e > noDups[i] && i == 0) {
				result.push_back(i+1);
				break;
			}
		}
	}
	return result;
}


// O(N*logN)
vector<int> climbingLeaderboardV2(vector<int> ranked, vector<int> player) {
	vector<int> result;
	vector<int> noDups;
	int j = 0;
	noDups.push_back(ranked[ranked.size()-1]);
	for (int i = ranked.size()-1; i >= 0; i--) {
		if (ranked[i] != noDups[j]) {
			noDups.push_back(ranked[i]);
			j++;
		}
	}

	for (int& e: player) {
		auto lower = lower_bound(noDups.begin(), noDups.end(), e);
		int idx = lower - noDups.begin();
		if (e == noDups[idx]) {
			result.push_back(noDups.size() - idx);
		} else {
			result.push_back(noDups.size()+1 - idx);
		}
	}
	return result;
}

int main(int argc, const char** argv) {
	int size1;
	vector<int> ranked;
	int size2;
	vector<int> player;	

	cin >> size1;
	int e;
	for (int i = 0; i < size1; i++) {
		cin >> e;
		ranked.push_back(e);
	}
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> e;
		player.push_back(e);
	}

	vector<int> result = climbingLeaderboardV2(ranked, player);

	for (int& e: result) {
		cout << e << " ";
	}
	cout << endl;

    return 0;
}
