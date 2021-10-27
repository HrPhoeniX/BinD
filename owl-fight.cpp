/*====================================
Auther:    Shyam Makwana
Problem:   owl-fight.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define MAX 100001

int parent[MAX];

int find(int n)
{
	if(parent[n]<0)
		return n;
	
	return parent[n] = find(parent[n]);
}
void unionp(int a,int b)
{
	parent[a]=min(parent[a],parent[b]);
	parent[b]=a;
}

int main()
{
	int n,m,a,b,x,y,q;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		parent[i]=-i;
	
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;		
		a=find(a);
		b=find(b);
		if(a!=b)
			unionp(a,b);
	}
	cin>>q;	

	while(q--)
	{		
		cin>>a>>b;
		x=find(a);
		y=find(b);
				
		if(x==y)
			cout<<"TIE"<<endl;
		else
		{
			if(parent[x]<parent[y])
				cout<<a<<endl;
			else
				cout<<b<<endl;
		}
	}
}