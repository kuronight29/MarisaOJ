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
    ll m,n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    ll x = 0, y = 0;
    bool kt = true;
    while (x < m && y < n) {
        cout << a[x][y] << " "; 
        if (kt) {
            if (y == n - 1) {
                x++;
                kt = false;
            } else if (x == 0) {
                y++;
                kt = false;
            } else {
                x--;
                y++;
            }
        } else {
            if (x == m - 1) {
                y++;
                kt = true;
            } else if (y == 0) {
                x++;
                kt = true;
            } else {
                x++;
                y--;
            }
        }
    }
    return 0;
}