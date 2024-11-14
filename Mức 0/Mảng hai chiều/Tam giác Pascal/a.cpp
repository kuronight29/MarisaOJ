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
    ll a[51][51] = {1};
    ll n;
    cin >> n;
    for(ll i =1;i<=n;i++){
        for(ll j=1;j<=i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}