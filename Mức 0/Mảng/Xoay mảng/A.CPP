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
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) {
        cin >> a[i];
    }
    vector<ll> b(n);
    for(ll i=0;i<n;i++){
        if(i+k<n){
            b[i]=a[i+k];
        }else{
            b[i]=a[i+k-n];
        }
    }
    for (ll i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}