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
    vector<vector<bool>> s(101, vector<bool>(101, false));
    vector<vector<ll>> a(n, vector<ll>(4));
    
    for(ll i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
        for(ll x = a[i][0]; x <= a[i][2]; x++) {
            for(ll y = a[i][1]; y <= a[i][3]; y++) {
                s[x][y] = true;
            }
        }
    }
    
    ll res = 0;
    for(ll i = 1; i <= 100; i++) {
        for(ll j = 1; j <= 100; j++) {
            if(s[i][j]) res++;
        }
    }
    
    cout << res;
    return 0;
}