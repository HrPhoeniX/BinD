#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define minvec(v) min_element(v.begin(), v.end())
#define maxvec(v) max_element(v.begin(), v.end())
#define vecin(v)       \
    for (auto &it : v) \
    cin >> it
#define vecout(v)    \
    for (auto i : v) \
    cout << i << " "
void func()
{
    ll n, m, l;
    cin >> n >> m >> l;

    ll x = (l + n - 1);
    while (m >= l && x >= l)
    {
        ll temp = (m % x);
        if (temp == m && m >= l)
        {
            x = m;
            m = temp;
            continue;
        }
        else
            m = temp;
        x--;
    }

    cout << m << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        func();
    return 0;
}
