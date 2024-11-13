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
    while (!st.empty() && st[0] == ' ') st.erase(0, 1);
    while (!st.empty() && st[st.size() - 1] == ' ') st.erase(st.size() - 1, 1);
    for (size_t i = 1; i < st.size(); ++i) {
        if (st[i] == ' ' && st[i - 1] == ' ') {
            st.erase(i, 1);
            --i;
        }
    }
    bool check = true;
    for (size_t i = 0; i < st.size(); ++i) {
        if (st[i] == ' ') {
            check = true;
        } else if (check) {
            st[i] = toupper(st[i]);
            check = false;
        } else {
            st[i] = tolower(st[i]);
        }
    }
    
    cout << st;
    return 0;
}