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
    string a[n][m];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    string st;
    cin >> st;
    ll dem=0;
    if(m>=st.size()){
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < st.size(); j++){
                if(a[i][j]==st){
                    dem++;
                }
            }
        }
    }
    if(m < st.size()){
    for(ll i = 0; i < m; i++){
        string s ="";
        for(ll j = 0; j < n; j++){
            s+=a[i][j][0];
        }
        if(s==st) dem++;
    }
    }
    if(dem==1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}