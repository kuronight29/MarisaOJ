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
    char c;
    cin >> c;
    if(c >= 'A' && c <= 'Z') cout << char(c + 32);
    else if(c >= 'a' && c <= 'z') cout << char(c - 32);
    else cout << "0";
    return 0;
}
