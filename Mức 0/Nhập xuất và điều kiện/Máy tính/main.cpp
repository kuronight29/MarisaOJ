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
    double a, b;
    string c;
    cin >> a >> c >> b;
    if (c == "+") cout << fixed << setprecision(3) << a + b;
    else if (c == "-") cout << fixed << setprecision(3)<< a - b;
    else if (c == "*") cout << fixed << setprecision(3)<< a * b;
    else if (c == "/") {
        if (b == 0) cout << "ze";
        else cout << fixed << setprecision(3)<< a / b;
    }
    return 0;
}