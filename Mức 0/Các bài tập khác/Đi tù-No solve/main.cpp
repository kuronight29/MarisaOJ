/*
    author longvuuuu
    github kuronight29
*/
#include <bits/stdc++.h>
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

int main() {
    ll x;
    ll d, m, y;
    cin >> x >> d >> m >> y;
    while (x > 0) {
        ll days_this_month = daysInMonth(m, y);
        if (d + x <= days_this_month) {
            d += x;
            x = 0;
        } else {
            x -= (days_this_month - d + 1);
            d = 1;
            if (m == 12) {
                m = 1;
                y++;
            } else {
                m++;
            }
        }
    }

    cout << d << " " << m << " " << y << endl;
    return 0;
}