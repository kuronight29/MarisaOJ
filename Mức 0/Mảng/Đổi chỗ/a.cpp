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
    ll n,q;
    cin >> n>>q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<ll, ll>> s(q);
    for(ll i = 0; i < q; i++) {
        cin >> s[i].first >> s[i].second;
    }
    for(ll i = q - 1; i >= 0; i--) {
        swap(a[s[i].first - 1], a[s[i].second - 1]);
    }
    for(ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}