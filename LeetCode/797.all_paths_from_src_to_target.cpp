#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


// Depth First Search
void dfs(vector<vector<int>>& graph,
		int v,
		int& target,
		vector<int>& path,
		vector<vector<int>>& paths) {
	path.push_back(v);
	if (v == target) {
		paths.push_back(path);
		path.pop_back();
		return;
	};
	vector<int> neighbors = graph[v];
	while(!neighbors.empty()) {
		int next = neighbors.back();
		dfs(graph, next, target, path, paths);
		neighbors.pop_back();
	}
	path.pop_back();
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
	vector<vector<int>> paths = {};
	vector<int> path;
	int target = graph.size()-1;
	dfs(graph, 0, target, path, paths);

	return paths;
}


int main(int argc, const char** argv) {
	vector<vector<int>> graph = {{1, 2}, {3}, {3}, {}};
	/* vector<vector<int>> graph = {{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}}; */
	/* vector<vector<int>> graph = {{1}, {}}; */
	vector<vector<int>> paths = allPathsSourceTarget(graph);
	for (auto path: paths) {
		for (auto v: path) {
			cout << v << "->";
		}
		cout << endl;
	}
    return 0;
}
