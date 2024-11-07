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
    ll d;
    ll h,m,s;
    cin >> d;
    h = d/3600;
    m = (d%3600)/60;
    s = d%60;
    cout << h << " " << m << " " << s;
    return 0;
}