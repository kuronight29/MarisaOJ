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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    if (a <= c && c <= b) cout << "YES";
    else if (a <= d && d <= b) cout << "YES";
    else if (c <= a && a <= d) cout << "YES";
    else if (c <= b && b <= d) cout << "YES";
    else cout << "NO";
    return 0;
}