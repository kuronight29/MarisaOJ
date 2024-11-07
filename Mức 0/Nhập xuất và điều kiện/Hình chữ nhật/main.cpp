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
    ll a[3];
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    if(a[1]==a[2]){
        cout << a[0];
    }else if(a[0]==a[1]){
        cout << a[2];}
    return 0;
}