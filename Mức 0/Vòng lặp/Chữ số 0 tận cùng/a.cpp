/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

int solve(int n) {
    int dem = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        dem += n / i;
    }
    return dem;
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    
    int n;
    cin >> n;
    cout << solve(n) << endl;
    
    return 0;
}