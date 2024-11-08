/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

int solve(string n) {
    int res = 0;
    int c = 1;
    int l = n.length();
    for (int i = l - 1; i >= 0; i--) {
        if (n[i] == '1') {
            res += c;
        }
        c *= 2;
    }
    return res;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    
    string n;
    cin >> n;
    cout << solve(n) << endl;
    
    return 0;
}