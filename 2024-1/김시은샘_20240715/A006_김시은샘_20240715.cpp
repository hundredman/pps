#include <string>
using namespace std;

bool solution(string s)
{
    int count = 0; // 'p'와 'y'의 개수를 세는 변수

    // 문자열을 순회하면서 'p'와 'y'의 개수를 세기
    for(int i = 0; i < s.size(); i++) {
        if(tolower(s[i]) == 'p') {
            count++;
        } else if(tolower(s[i]) == 'y') {
            count--;
        }
    }

    return count == 0; // 'p'와 'y'의 개수가 같으면 true, 아니면 false 반환
}