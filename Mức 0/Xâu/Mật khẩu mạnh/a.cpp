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
    ll dem=0;
    ll n = st.size();
    if(n>=8){
        dem++;
    }
    ll t1=0,t2=0,t3=0;
    for(ll i = 0; i < n; i++) {
        if(st[i]>='A' && st[i]<='Z') {
            if(t1==0){
                dem++;
                t1++;
            }
        }
        if(st[i]>='a' && st[i]<='z') {
            if(t2==0){
                dem++;
                t2++;
            }
        }
        if(st[i]>='0' && st[i]<='9') {
            if(t3==0){
                dem++;
                t3++;
            }
        }
    }
    if(dem>=4){
        cout << "STRONG";
    }else{
        cout << "WEAK";
    }
    return 0;
}