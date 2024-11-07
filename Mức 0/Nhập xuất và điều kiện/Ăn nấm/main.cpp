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
    ll x, y;
    cin >> x >> y;
    ll dem = 0;
    for (int i = 0; i < y; i++) {
        int day = (x + i) % 7;
        if (day >= 2 && day <= 6) { 
            dem++;
        }
    }
    cout << dem;
    return 0;
}