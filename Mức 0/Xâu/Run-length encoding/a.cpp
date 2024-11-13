/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

string memaybeo(const string &s) {
    string st = "";
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int dem = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            dem++;
            i++;
        }
        st += to_string(dem) + s[i];
    }
    return st;
}

string bomaygay(const string &s) {
    string st = "";
    int n = s.length();
    for (int i = 0; i < n; i++) {
        int dem = 0;
        while (isdigit(s[i])) {
            dem = dem * 10 + (s[i] - '0');
            i++;
        }
        st.append(dem, s[i]);
    }
    return st;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    
    string st;
    while(cin >> st) {
        if (isdigit(st[0])) {
            cout << bomaygay(st) << endl;
        } else {
            cout << memaybeo(st) << endl;
        }
    }

    return 0;
}