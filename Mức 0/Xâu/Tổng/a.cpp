// author: longvuu
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;
string st;
vector<string> a;
ll sti(string s)
{
    ll res = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        res = res * 10 + s[i] - '0';
    }
    return res;
}
int main()
{
    //freopen(taskname ".inp", "r", stdin);
    //freopen(taskname ".out", "w", stdout);
    while (cin >> st)
    {
        stringstream ss(st);
        string token;
        while (getline(ss, token, ' '))
        {
            a.pb(token);
        }
    }
    for (ll i = 0; i < a.size(); i++)
    {
        for (ll j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] < '0' || a[i][j] > '9')
            {
                a[i].erase(j, 1);
                j--;
            }
        }
    }
    ll sum = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        sum += sti(a[i]);
    }
    cout << sum;
    return 0;
}