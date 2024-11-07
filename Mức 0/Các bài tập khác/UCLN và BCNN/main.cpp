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
    ll a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << " " << a * b / __gcd(a, b);
    return 0;
}