/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

ll solve(ll a, ll b, ll c) {
    ll res = 1;
    a = a % c;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % c;
        }
        b = b >> 1;
        a = (a * a) % c;
    }
    return res;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll a,b,c;
    cin>>a>>b>>c;
    ll res = solve(a, b, c);
    cout << res;
    return 0;
}