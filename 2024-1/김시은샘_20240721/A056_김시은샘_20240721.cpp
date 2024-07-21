class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;

        // nums2를 역순으로 순회합니다.
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];

            // 스택의 꼭대기에 더 큰 요소가 올 때까지 스택에서 팝합니다.
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            // 스택이 비어있지 않으면, 꼭대기 요소가 num의 다음 큰 요소입니다.
            nextGreaterMap[num] = st.empty() ? -1 : st.top();

            // 현재 요소를 스택에 푸시합니다.
            st.push(num);
        }

        // nextGreaterMap을 사용하여 nums1에 대한 결과를 준비합니다.
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreaterMap[num]);
        }

        return result;
    }
};