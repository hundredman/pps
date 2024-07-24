#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 회원 정보를 담는 구조체
struct Member {
    int age;
    string name;
    int order; // 가입 순서를 기록하기 위한 변수
};

// 비교 함수
bool compare(const Member &a, const Member &b) {
    if (a.age == b.age) {
        return a.order < b.order; // 나이가 같으면 가입 순서대로 정렬
    }
    return a.age < b.age; // 나이가 다르면 나이 순으로 정렬
}

int main() {
    ios::sync_with_stdio(false); // 입력 속도 최적화
    cin.tie(nullptr);            // 입력 속도 최적화

    int N;
    cin >> N;

    vector<Member> members(N);

    for (int i = 0; i < N; ++i) {
        cin >> members[i].age >> members[i].name;
        members[i].order = i; // 가입 순서를 저장
    }

    // 정렬
    stable_sort(members.begin(), members.end(), compare);

    // 출력
    for (const auto &member : members) {
        cout << member.age << " " << member.name << '\n';
    }

    return 0;
}