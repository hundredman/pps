#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    list<int> people;
    for (int i = 1; i <= N; ++i) {
        people.push_back(i);
    }

    auto it = people.begin();
    vector<int> result;

    while (!people.empty()) {
        for (int i = 1; i < K; ++i) {
            ++it;
            if (it == people.end()) {
                it = people.begin();
            }
        }
        result.push_back(*it);
        it = people.erase(it);
        if (it == people.end()) {
            it = people.begin();
        }
    }

    cout << "<";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << result[i];
    }
    cout << ">\n";

    return 0;
}