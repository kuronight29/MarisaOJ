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
    ll a,b;
    cin >> a >> b;
    if(a == 0) {
        if(b == 0) {
            cout << "INFINITE SOLUTIONS";
        } else {
            cout << "NO SOLUTION";
        }
    } else {
        if(-b % a == 0) {
            cout << -b / a;
        } else {
            cout << "NO SOLUTION";
        }
    }
    return 0;
}
