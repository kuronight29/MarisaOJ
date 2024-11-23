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

int simp() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n, m;
    cin >> n >> m;
    char a[n][m];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    string st;
    cin >> st;
    ll dem = 0;
    ll l = st.length();
    string res = st;
    reverse(res.begin(), res.end());
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j <= m-l; j++) {
            string x = "";
            for(ll k = 0; k < l; k++) {
                x += a[i][j+k];
            }
            if(x == st || x == res) dem++;
        }
    }
    
    for(ll j = 0; j < m; j++) {
        for(ll i = 0; i <= n-l; i++) {
            string y = "";
            for(ll k = 0; k < l; k++) {
                y += a[i+k][j];
            }
            if(y == st || y == res) dem++;
        }
    }

    if(dem >= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}