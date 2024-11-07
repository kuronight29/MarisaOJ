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
    if(a==c||b==d||b==c||a==d){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
