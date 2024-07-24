#include <iostream>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> unique_numbers;

    for (int i = 0; i < N; ++i) {
        int number;
        cin >> number;
        unique_numbers.insert(number);
    }

    for (const int &num : unique_numbers) {
        cout << num << " ";
    }

    return 0;
}