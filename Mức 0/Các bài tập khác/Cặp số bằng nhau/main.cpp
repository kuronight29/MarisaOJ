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
    //freopen(taskname ".inp", "r", stdin);
    //freopen(taskname ".out", "w", stdout);
    ll n;
    vector<ll> a;
    cin >> n;
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        freq[x]++;
    }
    ll res = 0;
    for (auto& p : freq) {
        ll f = p.second;
        res += f * (f - 1) / 2;
    }
    cout << res << endl;
    return 0;
    cout << res;
    return 0;
}