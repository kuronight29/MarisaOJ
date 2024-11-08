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
    ll dem=0;
    ll t=0;
    while(n--){
        dem++;
        t++;
        if(t==k){
            n++;
            t=0;
        }
    }
    cout << dem;
    return 0;
}