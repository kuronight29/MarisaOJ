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
    ll n;
    cin >> n;
    ll a[n][n], b[n][n];
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            b[j][n-1-i] = a[i][j];
        }
    }

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}