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
const ll MOD = 1000000007;

ll a[100005];
ll s[100005];
vector<ll> p;

void sieve() {
    for (ll i = 0; i <= 1e5; i++) {
        a[i] = 0;
    }

    for (ll i = 2; i <= 1e5; i++) {
        if (a[i] == 0) {
            a[i] = i;
            s[i] = 0;
            p.push_back(i);
            for (ll j = i * i; j <= 1e5; j += i) {
                if (a[j] == 0)
                    a[j] = i;
            }
        }
    }
}

int simp()
{
    sieve();  
    ll q, n;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        cin >> n;
        while (n != 1)
        {
            ll ans = 0;
            ll c = a[n];
            while (n % c == 0)
            {
                n /= c;
                ans++;
            }
            s[c] = max(s[c], ans);
        }
    }

    ll res = 1;
    for (ll x : p)
    {
        if (s[x] != 0)
        {
            ll tmp = 1;
            for (ll j = 0; j < s[x]; j++)
            {
                tmp = (tmp * x) % MOD;
            }
            res = (res * tmp) % MOD;
        }
    }

    cout << res;
    return 0;
}