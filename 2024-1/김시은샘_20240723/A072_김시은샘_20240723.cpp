class Solution {
public:
    int dayOfYear(std::string date) {
        int year = std::stoi(date.substr(0, 4));
        int month = std::stoi(date.substr(5, 2));
        int day = std::stoi(date.substr(8, 2));

        // 월별 일수 배열 (평년)
        std::vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // 윤년 여부 판단
        if (isLeapYear(year)) {
            daysInMonth[1] = 29; // 윤년이면 2월을 29일로 설정
        }

        int dayOfYear = 0;
        // 이전 달까지의 일수 합산
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += daysInMonth[i];
        }
        // 현재 달의 일수 추가
        dayOfYear += day;

        return dayOfYear;
    }

private:
    // 윤년 여부 확인 함수
    bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};