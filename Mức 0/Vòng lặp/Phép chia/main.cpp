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
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    double a, b;
    ll k;
    cin >> a >> b >> k;
    ll res = (ll)(a / b);
    a -= res * b;
    for (ll i = 0; i < k; ++i) {
        a *= 10;
        res = (ll)(a / b);
        a -= res * b;
    }
    cout << res << endl;
    
    return 0;
}