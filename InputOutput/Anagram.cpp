#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		string a,b;
		cin>>a>>b;
		int arr[26]={0};
		for(int i=0;i<a.length();i++)
		{
			arr[a[i]-'a']+=1;	
		}
		
		for(int i=0;i<b.length();i++)
		{
				arr[b[i]-'a']-=1;	
		}
	
		
		int sum=0;
		for(int i=0;i<26;i++)
		{
			sum+=abs(arr[i]);
		}
		cout<<sum<<"\n";
	}
}
