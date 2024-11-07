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
    ll a, b, c;
    cin >> a >> b >> c;
    // kiem tra co phai 3 canh cua 1 tam giac hay ko 
    if(a+b>c && a+c>b && b+c>a){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
