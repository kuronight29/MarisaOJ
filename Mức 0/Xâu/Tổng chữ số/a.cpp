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
    string st;
    getline(cin, st);
    ll res = 0;
    ll n = st.size();
    for(ll i = 0; i < n; i++) {
        if(st[i] >= '0' && st[i] <= '9') {
            res = res + (st[i] - '0');
        }
    }
    cout << res;
    return 0;
}