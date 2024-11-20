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
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin >> a[i][j];
        }
    } 
    x--,y--;
    ll t=x,u=y;
    ll res=0;
    while(t>0&&u>0){
        t--;
        u--;
        res +=a[t][u];
    }
    t=x,u=y;
    while(t>0&&u<m-1){
        t--;
        u++;
        res +=a[t][u];
    }
    t=x,u=y;
    while(t<n-1&&u<m-1){
        t++;
        u++;
        res +=a[t][u];
    }
    t=x,u=y;
    while(t<n-1&&u>0){
        t++;
        u--;
        res +=a[t][u];
    }
    cout << res+a[x][y] << endl;
    return 0;
}