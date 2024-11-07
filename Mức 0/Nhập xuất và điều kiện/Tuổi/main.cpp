/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    //freopen(taskname ".inp", "r", stdin);
    //freopen(taskname ".out", "w", stdout);
    ll day, month,year;
    ll day1, month1,year1;
    cin >> day >> month >> year;
    cin >> day1 >> month1 >> year1;
    if(year>year1)
    {
        cout << "2";
    }
    else if(year<year1)
    {
        cout << "1";
    }
    else if(year==year1)
    {
        if(month>month1)
        {
            cout << 2;
        }else if(month<month1){
            cout << 1;
        }else{
            if(day>day1){
                cout << 2;
            }else if(day<day1){
                cout << 1;
                }
            }
        }
        return 0;
    }
