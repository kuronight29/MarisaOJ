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
    vector<int> a(26, 0);

    for(char &ch : st) {
        if(ch >= 'A' && ch <= 'Z') ch += 32;
        if(ch >= 'a' && ch <= 'z') a[ch - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
