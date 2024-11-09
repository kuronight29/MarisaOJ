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
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> s; 
    for(ll i=0; i<n; ++i) {
        cin >> a[i];
        s[a[i]]++;
    }
    ll res = 0, dem = 0;  
    for(auto &k : s) { 
        if (k.second > dem || (k.second == dem && k.first > res)) {
            dem = k.second;
            res = k.first;
        }
    }
    cout << res << endl;
    return 0;
}