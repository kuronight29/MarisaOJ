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
        ll a,b;
        cin >> a >> b;
        ll res=a+b;
        while(res > 0) {
            if (res % 10 != 0) {
                cout << res % 10;
                res /= 10;
                break;
            }
            res /= 10;
        }
        while(res > 0) {
            cout << res % 10;
            res /= 10;
        }
        return 0;
    }