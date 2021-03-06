/* Leetcode - Problem 442 - Find All Duplicates in an Array
   
   You are given a binary tree in which each node contains an integer value.

   Find the number of paths that sum to a given value.

   The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr)
            return 0;
        return dfs(root,sum) + pathSum(root->left,sum) + pathSum(root->right,sum);
    }
    
    int dfs(TreeNode* node, int sum) {
        if (node == nullptr)
            return 0;
        int ans = node->val == sum ? 1:0;
        return ans + dfs(node->left,sum - node->val) + dfs(node->right,sum - node->val);
    }
};
