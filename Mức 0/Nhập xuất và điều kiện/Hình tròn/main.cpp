/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;
int main() {
    //freopen(taskname ".inp", "r", stdin);
    //freopen(taskname ".out", "w", stdout);
    double n;
    cin >> n;
    // tinh chu vi va dien tich hinh tron
    long double dientich = n * n * 3.14;
    long double chuvi = 2 * n * 3.14*1.00000000000;
    cout << fixed << setprecision(3) << chuvi << " " << dientich << endl;
    return 0;
}