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
const int maxn = 1e7; 
bool is_prime[maxn]; 
void sieve(ll n){
    fill(is_prime, is_prime + n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}
int simp() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll q;
    cin >> q;
    sieve(maxn);
    while(q--){
        ll n;
        cin >> n;
        set<ll> s;
        for(ll i = 2; i * i <= n; i++){
            if(is_prime[i] && n % i == 0){
                s.insert(i);
                while(n % i == 0) n /= i;
            }
        }
        if(n > 1 && is_prime[n]) s.insert(n);
        
        for(ll x : s) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}