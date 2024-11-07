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
    ll res=1;
    cin>>n;
    for(ll i =1;i<=n;i++){
        res=res*i;
    }
    cout<<res;
    return 0;
}