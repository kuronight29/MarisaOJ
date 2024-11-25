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

const int MAXN = 1e6+1;
ll a[MAXN], s[MAXN];

void sieve() {
    for(int i = 1; i < MAXN; i++) {
        for(int j = i; j < MAXN; j += i) {
            a[j]++;
        }
    }
    s[0] = a[0];
    for(int i = 1; i < MAXN; i++) {
        s[i] = s[i-1] + a[i];
    }
}

int simp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    sieve();
    ll q;
    cin >> q;
    while(q--) {
        ll l, r;
        cin >> l >> r;
        cout << s[r] - s[l-1] << "\n";
    }
    
    return 0;
}