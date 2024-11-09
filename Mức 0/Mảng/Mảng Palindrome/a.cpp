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
    bool check=true;
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) {
        cin >> a[i];
    }
    for(ll i=0; i<n; ++i) {
        if(a[i]==a[n-1]){
            check=true;
        }else{
            check=false;
            break;
        }
    }
    if(check){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}