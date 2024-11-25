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
const int maxn = 2*10e6 + 1; 
bool nt[maxn]; 
vector<bool> sieve(long long L, long long R) {
    long long sqrtR = sqrt(R);
    vector<bool> mark(sqrtR + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= sqrtR; ++i) {
        if (!mark[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= sqrtR; j += i)
                mark[j] = true;
        }
    }
    vector<bool> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}
int simp() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll l, r;
    cin >> l >> r;
    vector<bool> isPrime = sieve(l, r);
    for (ll i = 0; i <= r - l; ++i) {
        if (isPrime[i]) {
            cout << l + i << "\n";
        }
    }
    return 0;
}