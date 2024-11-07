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
    double n;
    cin >> n;
    if(n >= 9.0){
        cout << "VERY TOXIC";
    }else if(n >= 5.0 && n<=8.9){
        cout << "TOXIC";
    }else{
        cout << "SAFE";
    }
    return 0;
}
