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
const int maxn = 2*10e6; 
bool is_prime[maxn]; 
void sieve(ll n){
    for (ll i = 2; i <= n; i++)
        is_prime[i] = true;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * 2; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}
int simp() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n;
    cin >> n;
    sieve(n);
    for(ll i = 2; i <= n; i++){
        if(is_prime[i]){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}