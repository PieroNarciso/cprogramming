#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


vector<int> ht;

void rc(TreeNode* root, int level) {
	if (root == nullptr) {
		return;
	} else {
		if (ht.size() < level+1) {
			ht.push_back(0);
		}
		ht[level] += root->val;
		rc(root->left, level+1);
		rc(root->right, level+1);
		return;
	}
}

int deepestLeavesSum(TreeNode* root) {
	int level = 0;
	rc(root, level);
	
	if (ht.empty()) return 0;
	return ht.back();
}


int main(int argc, const char** argv) {
    return 0;
}
