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
    // 모든 왼쪽 잎의 합을 구하는 함수
    int sumOfLeftLeaves(TreeNode* root) {
        // 기저 사례: 노드가 null이면 0을 반환
        if (root == nullptr) return 0;

        int sum = 0;

        // 왼쪽 자식이 있고 왼쪽 자식이 잎 노드인 경우
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val;
        }

        // 왼쪽과 오른쪽 자식을 재귀적으로 탐색하여 합산
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};