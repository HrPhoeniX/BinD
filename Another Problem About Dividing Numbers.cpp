#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define yesr {cout<<"YES"<<endl;return;}
#define nor {cout<<"NO"<<endl;return;}
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<int>)
#define PI 3.141592653589793238
#define int long long

typedef long long ll;
typedef long double ld;
// typedef pair<ll,ll> pi;

const int N = 2e5+5;
const int inf = 1e9;
const int inf64 = 1e18;
const int mod = inf + 7;

// ll pow(ll n,ll k)
// {
//     if(k==0)return 1;
//     ll ans=1;
//     while(k)
//     {
//         if(k%2==1)ans=(ans*n)%mod;
//         k/=2;
//         n=(n*n)%mod;
//     }
//     return ans;
// }

ll cntfactors(ll n)
{
  ll ans=0;
  while(n%2==0)
  {
      n=n/2;
      ans++;
  }
  for(ll i=3;i*i<=n;i+=2)
  {
      while(n%i==0)
      {
          n=n/i;
          ans++;
      }
  }
  if(n>1)ans++;
  return ans;
}

void solve()
{
  ll i,j,n,m,k;
  cin>>n>>m>>k;
  i = cntfactors(n);
  i+= cntfactors(m);
  if(k == 1)
  {
    if(n == m || (n%m !=0 && m%n != 0))
    {
      nor;
    }
  }
  if(k > i)
  {
    nor;
  }
  yesr;
}
int32_t main()
{
    fast
    int q=1;
    cin>>q;
    while(q--)solve();
    return 0;
}
