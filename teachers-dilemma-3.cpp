/*====================================
Auther:    Shyam Makwana
Problem:   teachers-dilemma-3.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define MAX 100005

int parent[MAX];

int find(int n)
{
	if(parent[n]<0)
		return n;
	
	return parent[n] = find(parent[n]);
}
void unionp(int a,int b)
{
	parent[a]+=parent[b];
	parent[b]=a;
}

int32_t main()
{
	int n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		parent[i]=-1;
	
	while(m--)
	{
		cin>>a>>b;		
		a=find(a);b=find(b);
		if(a!=b)
			unionp(a,b);
	}
	int ans=1;
	for(int i=1;i<=n;i++)
	{		
		if(parent[i]<0)
			ans*=parent[i];		
	}
	cout<<abs(ans);
}