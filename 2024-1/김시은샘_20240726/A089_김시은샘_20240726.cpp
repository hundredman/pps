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
    // BST를 구축하는 도움 함수
    TreeNode* sortedArrayToBSTHelper(const vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr; // 기저 사례: 처리할 요소가 없음
        }

        // 중간 인덱스를 찾습니다
        int mid = left + (right - left) / 2;

        // 중간 요소로 루트 노드를 생성합니다
        TreeNode* root = new TreeNode(nums[mid]);

        // 왼쪽과 오른쪽 서브트리를 재귀적으로 구축합니다
        root->left = sortedArrayToBSTHelper(nums, left, mid - 1);
        root->right = sortedArrayToBSTHelper(nums, mid + 1, right);

        return root;
    }

    // 정렬된 배열을 BST로 변환하는 함수
    TreeNode* sortedArrayToBST(const vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);
    }
};