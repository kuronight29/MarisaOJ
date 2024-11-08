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
    for(int i = n; i>=1; i--) {
        for(int j = i; j>=1; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}