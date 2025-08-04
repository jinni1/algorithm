#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    time_t timer = time(NULL) + 9 * 60 * 60; // 현재 시각 반환
    struct tm* t = gmtime(&timer); // tm 구조체 사용
    int year = t->tm_year + 1900;
    int month = t->tm_mon + 1;
    int day = t->tm_mday;
    cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day << endl;
}