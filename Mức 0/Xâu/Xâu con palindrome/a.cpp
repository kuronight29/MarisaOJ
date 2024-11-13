/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

bool check(string st){
    string s =st;
    reverse(s.begin(), s.end());
    if(s == st) {
        return true;
    }
    return false;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    string st;
    cin >> st;
    ll n = st.size();
    ll dem=0;
    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++){
            string s = st.substr(i, j-i+1);
            if(check(s)){
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}