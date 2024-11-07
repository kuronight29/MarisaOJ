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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << min(a, min(b, c)) << " " << max(a, max(b, c));
    return 0;
}
