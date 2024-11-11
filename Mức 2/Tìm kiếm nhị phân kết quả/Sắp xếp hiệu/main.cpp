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
    ll n,k;
    cin >> n >> k;
    ll res = 0;
    vector<ll> A(n);
    for(ll i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    auto dem = [&](ll mid) {
        ll res = 0;
        for(ll i = 0; i < n; ++i) {
            res += upper_bound(A.begin() + i + 1, A.end(), A[i] + mid) - (A.begin() + i + 1);
        }
        return res;
    };

    sort(A.begin(), A.end());
    ll left = 0, right = A[n-1] - A[0];
    while(left < right) {
        ll mid = left + (right - left) / 2;
        if(dem(mid) < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    cout << left << endl;
    return 0;
}