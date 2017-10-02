#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s)
{
/*	string b="";
	for(int i=s.length()-1;i>=0;i--)
	{
		b+=s[i];
	}
	return b==s;*/
	int low=0,high=s.length()-1;
	while(low<high)
	{
		if(s[low]!=s[high])
		{
			return 0;
		}
		low++;
		high--;
	}
	return 1;
}
int main()
{
	string s;
	cin>>s;
	isPalindrome(s)?cout<<"Yes":cout<<"No";
}
