#include<bits/stdc++.h>
using namespace std;
int main()
{
 	string s;
 	cin>>s;
 	cout<<(int)'a';
 	for(int i=0;i<s.length();i++)
 	{
 		if(islower(s[i]))
		{
		  	s[i]=toupper(s[i]);  				 	
		}	
		else
		{
		 	s[i]=tolower(s[i]);
		}
    }
    cout<<s;
}
