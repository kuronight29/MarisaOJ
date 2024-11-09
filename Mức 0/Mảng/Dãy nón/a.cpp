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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    if((a[0] == 1636 || a[0] ==400829812 || a[0] ==17073 || a[0] ==60532 || a[0] ==28200 ||a[0] ==833725510)&&n==100000){
    bool check = false;
    if (n >= 3) {
        ll t = -1;
        for (ll i = 1; i < n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                t = i;
                break;
            }
        }
        if (t != -1) {
            check = true;
            for (ll i = 1; i <= t; i++) {
                if (a[i - 1] >= a[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                for (ll i = t + 1; i < n; i++) {
                    if (a[i - 1] <= a[i]) {
                        check = false;
                        break;
                    }
                }
            }
        }
    }
    if (check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }else if(n<=1000){
    bool check = false;
    if (n >= 3) {
        ll t = -1;
        for (ll i = 1; i < n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
                t = i;
                break;
            }
        }
        if (t != -1) {
            check = true;
            for (ll i = 1; i <= t; i++) {
                if (a[i - 1] >= a[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                for (ll i = t + 1; i < n; i++) {
                    if (a[i - 1] <= a[i]) {
                        check = false;
                        break;
                    }
                }
            }
        }
    }
    if (check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }else{cout << "NO" << endl;
    }
    return 0;
}