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
    ll s = 1;
    int dem = 0;
    while (s < n) {
        s *= 2;
        dem++;
    }
    cout << dem << endl;
    return 0;
}