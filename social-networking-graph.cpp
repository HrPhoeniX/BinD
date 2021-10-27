/*====================================
Auther:    Shyam Makwana
Problem:   social-networking-graph.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fori(i,n) for(int i=0;i<n;i++)
#define forr(i,n) for(int i=n-1;i>=0;i--)
#define cina(a)	for(int i=0;i<n;i++)cin>>a[i]
#define couta(a) for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define add(a,b) ((a%mod)+(b%mod))%mod
#define mul(a,b) ((a%mod)*(b%mod))%mod
#define __lcm(a,b) ((a*b)/__gcd(a,b))
#define endl "\n"
#define MAX 100005

vector<int> arr[MAX];
bool vis[MAX];
int dist[MAX],level[MAX];
int MXD,cnt;

void bfs(int src)
{
	queue<int> q;
	q.push(src);
	vis[src]=true;
	dist[src]=0;

	while(!q.empty())
	{
		int cur = q.front();
		q.pop();

		for(int child : arr[cur])
		{
			if(vis[child] == false)
			{
				q.push(child);
				vis[child] = true;
				dist[child] = dist[cur]+1;
				level[dist[child]] ++;
			}
		}
	}
}

int main()
{
	long long int n,m,t,l,k,p,q,r,a,b,c,d,n1;
	long long int count=0,count1=0,total=0,ans=0;	
	long long int max1=INT_MIN,min=INT_MAX;
	long long int temp=0,temp1;
	fastio;
	bool flag=true,flag1=true,flag2=false,flag3=false;
	char var;	
	string str;

	cin >> n >>m;
	while(m--)
	{
		cin >> a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
    cin>>m;
    while(m--)
    {
    	cin >> a>>b;
    	fori(i,n+1) vis[i]=false,dist[i]=0,level[i]=0;
    	bfs(a);

    	cout<<level[b]<<endl;
    }
}
