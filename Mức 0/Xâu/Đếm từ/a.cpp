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
    string st;
    getline(cin, st);
    ll dem = 0;
    ll n = st.size();
    bool check = false;
    for(ll i = 0; i < n; i++) {
        if(st[i] != ' ') {
            if(!check) {
                dem++;
                check = true;
            }
        } else {
            check = false;
        }
    }
    cout << dem;
    return 0;
}