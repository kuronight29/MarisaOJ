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
    ll m, n;
    cin >> m >> n;
    ll a[m][n];
    for(ll i = 0; i < m; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    
    return 0;
}