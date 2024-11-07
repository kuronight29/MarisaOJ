/*
    author https://github.com/aiko-chan-ai
    github kuronight29
*/
#include <bits/stdc++.h>
#include <ctime>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

bool isLeapYear(ll year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int daysInMonth(ll month, ll year) {
    switch (month) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeapYear(year) ? 29 : 28;
        default: return 31;
    }
}

std::string calculateExpiryDate(long long startDay, long long startMonth, long long startYear, long long daysToExpire) {
    const long long loopY = 365 * 400 + 97;
    long long dayR = daysToExpire % loopY;
    long long year400 = (daysToExpire - dayR) / loopY;

    if (dayR == 0) {
        return std::to_string(startDay) + " " + std::to_string(startMonth) + " " + std::to_string(startYear + 400 * year400);
    } else {
        std::tm startDate = {};
        startDate.tm_mday = startDay;
        startDate.tm_mon = startMonth - 1; // tm_mon is 0-based in std::tm
        startDate.tm_year = startYear - 1900; // tm_year is year since 1900 in std::tm

        std::time_t startEpoch = std::mktime(&startDate);
        startEpoch += dayR * 86400; // 86400 seconds in a day

        std::tm* expiryDate = std::localtime(&startEpoch);
        long long expiryDay = expiryDate->tm_mday;
        long long expiryMonth = expiryDate->tm_mon + 1; // tm_mon is 0-based
        long long expiryYear = expiryDate->tm_year + 1900;

        return std::to_string(expiryDay) + " " + std::to_string(expiryMonth) + " " + std::to_string(expiryYear + 400 * year400);
    }
}

int main() {
    long long startDay, startMonth, startYear;
    long long daysToExpire;
    cin >> daysToExpire >> startDay >> startMonth >> startYear;
    std::string expiryDate = calculateExpiryDate(startDay, startMonth, startYear, daysToExpire);
    std::cout << expiryDate << std::endl;

    return 0;
}