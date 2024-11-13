/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

int precedence(char x) {
    if(x == '+'||x == '-') return 1;
    if(x == '*'||x == '/') return 2;
    return 0;
} 

ll pheptinh(ll a, ll b, char x) {
    switch(x) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

ll tinh(string st) {
    int i;
    stack <ll> a;
    stack <char> s;
    for(i = 0; i < st.length(); i++) {
        if(st[i] == ' ') continue;
        else if(st[i] == '(') {
            s.push(st[i]);
        }
        else if(isdigit(st[i])) {
            ll u = 0;
            while(i < st.length() && isdigit(st[i])) {
                u = (u*10) + (st[i]-'0');
                i++;
            }
            a.push(u);
            i--;
        }
        else if(st[i] == ')') {
            while(!s.empty() && s.top() != '(') {
                ll s2 = a.top();
                a.pop();
                ll s1 = a.top();
                a.pop();
                char x = s.top();
                s.pop();
                a.push(pheptinh(s1, s2, x));
            }
            if(!s.empty()) s.pop();
        }
        else {
            while(!s.empty() && precedence(s.top()) >= precedence(st[i])) {
                ll s2 = a.top();
                a.pop();
                ll s1 = a.top();
                a.pop();
                char x = s.top();
                s.pop();
                a.push(pheptinh(s1, s2, x));
            }
            s.push(st[i]);
        }
    }
    while(!s.empty()) {
        ll s2 = a.top();
        a.pop();
        ll s1 = a.top();
        a.pop();
        char x = s.top();
        s.pop();
        a.push(pheptinh(s1, s2, x));
    }
    return a.top();
}

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    string st;
    getline(cin, st);
    ll n = st.length();
    ll res = tinh(st);
    cout << res << endl;
    
    return 0;
}