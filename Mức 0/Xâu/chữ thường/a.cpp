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
    ll n = st.size();
    for(ll i = 0; i < n; i++) {
        if(st[i]>='A' && st[i]<='Z') {
            st[i] = st[i] + 32;
        }
    }
    cout << st;
    
    return 0;
}