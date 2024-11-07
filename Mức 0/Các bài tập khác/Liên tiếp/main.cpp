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
    ll n;
    cin >> n;
    // Cho số nguyên n. Đếm số cách phân tích n thành ít nhất 2 số nguyên liên tiếp.
    
    int dem = 0;
    for (ll k = 2; k * (k + 1) / 2 <= n; ++k) {
        if ((n - k * (k + 1) / 2) % k == 0) {
            dem++;
        }
    }
    cout << dem << endl;

    return 0;
}