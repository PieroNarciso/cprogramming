#include <bits/stdc++.h>


using namespace std;

struct comp {
    template<typename T, typename U>
    bool operator()(T const& a, U const& b) const {
		if (a.first == b.first) return a.second > b.second;
		return a.first < b.first;

    }
};

vector<string> topKFrequent(vector<string>& words, int k) {
	unordered_map<string, int> mp;
	priority_queue<pair<int, string>, vector<pair<int, string>>, comp> heap;
	for (auto& word: words) {
		mp[word]++;	
	}

	for (auto& it: mp) {
		heap.push(make_pair(it.second, it.first));
	}
	
	vector<string> res;
	while (k-- && !heap.empty()) {
		res.push_back(heap.top().second);
		heap.pop();
	}

	return res;
}

int main(int argc, const char** argv) {
    return 0;
}
