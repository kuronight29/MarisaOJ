/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

bool check(vector<vector<ll>>& a, vector<vector<ll>>& b, ll n, ll m, ll x, ll y) {
    for (ll i = 0; i <= n - x; i++) {
        for (ll j = 0; j <= m - y; j++) {
            bool kt = true;
            for (ll k = 0; k < x; k++) {
                for (ll l = 0; l < y; l++) {
                    if (a[i + k][j + l] != b[k][l]) {
                        kt = false;
                        break;
                    }
                }
                if (!kt) break;
            }
            if (kt) return true;
        }
    }
    return false;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<vector<ll>> a(n,vector<ll>(m));
    vector<vector<ll>> b(x,vector<ll>(y));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(ll i=0;i<x;i++){
        for(ll j=0;j<y;j++){
            cin >> b[i][j];
        }
    }
    
    if (check(a, b, n, m, x, y)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}