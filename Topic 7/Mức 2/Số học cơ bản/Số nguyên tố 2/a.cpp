/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define simp main
#define pb push_back
using namespace std;
bool kt(ll n) {
    if(n < 2) return false;
    for(ll i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int simp() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n;
    cin >> n;
    if(kt(n)) cout << "YES";
    else cout << "NO";
    return 0;
}