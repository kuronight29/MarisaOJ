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
    string st,t;
    ll dem=0;
    cin >> st >> t;
    ll n = st.size();
    ll k=t.size();
    for(ll i = 0; i < n; i++) {
        string s = st.substr(i, k);
        if(s == t) {
            dem++;
        }
    }
    cout << dem;
    return 0;
}