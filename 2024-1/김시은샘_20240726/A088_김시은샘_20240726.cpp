class MinStack {
public:
    MinStack() {

    }

    void push(int val) {
        // 새로운 값을 주 스택에 푸시합니다.
        primaryStack.push(val);

        // minStack이 비어있으면 새로운 값을 최소값으로 푸시합니다.
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            // 새로운 값과 현재 최소값 중 더 작은 값을 minStack에 푸시합니다.
            minStack.push(std::min(val, minStack.top()));
        }
    }

    void pop() {
        // 주 스택과 minStack에서 가장 위의 요소를 제거합니다.
        if (!primaryStack.empty()) {
            primaryStack.pop();
            minStack.pop();
        }
    }

    int top() {
        // 주 스택에서 가장 위의 요소를 반환합니다.
        return primaryStack.top();
    }

    int getMin() {
        // minStack에서 가장 위의 요소를 반환합니다. (현재 최소값)
        return minStack.top();
    }

private:
    std::stack<int> primaryStack; // 모든 요소를 저장하는 주 스택
    std::stack<int> minStack;     // 현재 최소값을 저장하는 스택
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */