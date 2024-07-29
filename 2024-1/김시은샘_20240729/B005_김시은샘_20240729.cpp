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
    // 중위 순회로 노드 값을 벡터에 저장하는 함수
    void inorderTraversal(TreeNode* root, vector<int>& elements) {
        if (root == nullptr) return;
        inorderTraversal(root->left, elements);
        elements.push_back(root->val);
        inorderTraversal(root->right, elements);
    }

    // 두 값의 합이 k인지 확인하는 함수
    bool findTarget(TreeNode* root, int k) {
        vector<int> elements;
        inorderTraversal(root, elements);

        int left = 0;
        int right = elements.size() - 1;

        while (left < right) {
            int sum = elements[left] + elements[right];
            if (sum == k) {
                return true;
            } else if (sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return false;
    }
};