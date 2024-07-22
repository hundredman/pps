#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> cards;

    // 1부터 N까지의 카드를 큐에 넣음
    for (int i = 1; i <= N; ++i) {
        cards.push(i);
    }

    // 큐에 한 장의 카드만 남을 때까지 반복
    while (cards.size() > 1) {
        // 제일 위의 카드를 버림
        cards.pop();

        // 제일 위의 카드를 큐의 끝으로 옮김
        int top = cards.front();
        cards.pop();
        cards.push(top);
    }

    // 마지막으로 남은 카드 출력
    cout << cards.front() << '\n';

    return 0;
}