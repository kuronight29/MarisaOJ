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
    
    ll n;
    cin >> n;

    int dem = 0;
    for (ll x1 = 1; x1 < n; ++x1) {
        for (ll x2 = x1 + 1; x2 < n; ++x2) {
            for (ll x3 = x2 + 1; x3 < n; ++x3) {
                ll x4 = n - x1 - x2 - x3;
                if (x4 > x3) {
                    dem++;
                }
            }
        }
    }
    
    cout << dem << endl;
    
    return 0;
}