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
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) {
        cin >> a[i];
    }

    ll res = 0, dem = 0;
    for(ll i = 0; i < n; ++i) {
        if(a[i] > 0) {
            dem++;
            if(dem > res) {
                res = dem;
            }
        } else {
            dem = 0;
        }
    }

    cout << res << endl;
    return 0;
}