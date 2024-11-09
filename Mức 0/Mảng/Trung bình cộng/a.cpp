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
    double res;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        res+=a[i];
    }
    cout << fixed << setprecision(3) << res/n;
    
    return 0;
}