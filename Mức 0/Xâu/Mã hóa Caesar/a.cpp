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
    ll n,k;
    getline(cin, st);
    cin >> k;
    n = st.size();
    for(ll i = 0; i < n; i++) {
        if(st[i] >= 'a' && st[i] <= 'z') 
            st[i] = 'a' + (st[i] - 'a' + k) % 26;
    }
    cout << st;
    return 0;
}