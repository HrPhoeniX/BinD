#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);srand(time(NULL));
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<int>())
#define PI 3.141592653589793238

const ll N = 2e5+5;
const ll inf = 1e9;
const ll inf64 = 1e18;
const ll mod = inf + 7;

using namespace std;

void solve()
{
    ll n,m,i,j;
    ll x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll ans = abs(x2-x1) + abs(y2-y1);
    if(x1==x2 && x2 == x3 && ( ((y1 < y3)&&(y2 > y3)) || ((y1 > y3)&&(y2 < y3))))
    {
        ans+=2;
    }
    else if(y1==y2 && y2 == y3 && ( ((x1 < x3)&&(x2 > x3)) || ((x1 > x3)&&(x2 < x3))))
    {
        ans+=2;
    }
    cout<<ans<<"\n";
}
int32_t main()
{
    fast
    ll q=1;
    cin>>q;
    while(q--)solve();
    return 0;
}
