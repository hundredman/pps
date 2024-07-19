₩#include <iostream>
 #include <string>

 using namespace std;

 int main() {
     string caesarWord;
     cin >> caesarWord;

     string originalWord = "";

     for (char c : caesarWord) {
         if (c >= 'D' && c <= 'Z') {
             originalWord += c - 3;
         } else {
             originalWord += c + 23; // 'A', 'B', 'C'의 경우
         }
     }

     cout << originalWord << endl;

     return 0;
 }