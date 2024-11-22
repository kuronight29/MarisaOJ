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
    ll a[105][105] = {0};
    
    ll s = 1;
    ll len = 0, xuong = n-1, trai = 0, phai = m-1;
    while (s <= n * m) {
        for (ll j = trai; j <= phai && s <= n * m; j++) {
            a[len][j] = s++;
        }
        len++;
        for (ll i = len; i <= xuong && s <= n * m; i++) {
            a[i][phai] = s++;
        }
        phai--;
        for (ll j = phai; j >= trai && s <= n * m; j--) {
            a[xuong][j] = s++;
        }
        xuong--;
        for (ll i = xuong; i >= len && s <= n * m; i--) {
            a[i][trai] = s++;
        }
        trai++;
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}