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
    ll x,y;
    cin >> x >> y;
    ll a[1001][1001];
    for(ll i=1;i<=x;i++){
        for(ll j=1;j<=y;j++){
            cin >> a[i][j];
        }
    }
    for(ll i=1;i<=y;i++){
        ll res=0;
        for(ll j=1;j<=x;j++){
            res+=a[j][i];
        }
        cout << res << " ";
    }
    return 0;
}