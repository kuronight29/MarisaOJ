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
    ll a[100][100];
    ll n, m,q;
    cin >> n >> m >> q;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    while(q--){
        ll i,j,x;
        cin >> x>> i >> j;
        if(x==1){
            for(ll k = 1; k <= m; k++){
                swap(a[i][k], a[j][k]);
            }
        }else{
            for(ll k = 1; k <= n; k++){
                swap(a[k][i], a[k][j]);
        }
    }
    }
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}