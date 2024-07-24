#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T; // 테스트 케이스의 개수
    cin >> T;

    while (T--) {
        int A[10]; // 배열 A
        for (int i = 0; i < 10; i++) {
            cin >> A[i];
        }

        // 배열을 내림차순으로 정렬
        sort(A, A + 10, greater<int>());

        // 3번째 큰 값 출력 (0-based index라서 A[2]가 3번째 큰 값)
        cout << A[2] << endl;
    }

    return 0;
}