class MyQueue {
public:
    MyQueue() {
        // 생성자: 초기화 작업은 필요 없음
    }

    void push(int x) {
        // 요소 x를 첫 번째 스택에 푸시
        stack1.push(x);
    }

    int pop() {
        // 만약 두 번째 스택이 비어있으면 첫 번째 스택의 모든 요소를 두 번째 스택으로 이동
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        // 두 번째 스택의 맨 위 요소를 팝
        int front = stack2.top();
        stack2.pop();
        return front;
    }

    int peek() {
        // 만약 두 번째 스택이 비어있으면 첫 번째 스택의 모든 요소를 두 번째 스택으로 이동
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        // 두 번째 스택의 맨 위 요소를 반환
        return stack2.top();
    }

    bool empty() {
        // 두 스택이 모두 비어 있으면 큐가 비어 있는 것
        return stack1.empty() && stack2.empty();
    }

private:
    std::stack<int> stack1; // 첫 번째 스택
    std::stack<int> stack2; // 두 번째 스택
};