#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    int length = word.length();

    for (int i = 0; i < length; i += 10) {
        cout << word.substr(i, 10) << endl;
    }

    return 0;
}