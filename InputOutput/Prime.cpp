#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
	int f=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			f=1;
		}
	}
	if(f)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	bool b[n]={0};
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		arr[i]=i;
	}
	for(int i=2;i<=n;i++)
	{
		int j;
		if(b[i]==0 && isPrime(i))
		{
			j=i*i;
			for(;j<n;j+=i)
			{
				b[j]=1;
			}
		}
	}
	for(int i=2;i<n;i++)
	{
		if(!b[i])
		{
			cout<<arr[i]<<' ';
		}
	}
}
