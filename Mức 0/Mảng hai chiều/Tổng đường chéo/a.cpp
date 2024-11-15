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
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    ll sum1 = 0, sum2 = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(i - j == x - y) {
                sum1 += a[i][j];
            }
            if(i + j == x + y) {
                sum2 += a[i][j];
            }
        }
    }
    cout << sum1 << " " << sum2 << endl;
    
    return 0;
}