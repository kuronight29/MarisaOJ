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
    cin >> n;
    for(ll i =n;i>=1;i--){
        if(i%2==0){
            cout << i << " ";
        }
    }
    return 0;
}