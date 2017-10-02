#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	long answer=1;
    cin>>n;
    int value;
    for(int i = 0;i<n;i++)
    {
    	cin>>value;
    	answer = (answer*value)%(long)(pow(10,9)+7);
    
    }
    cout<<answer;
    return 0;
}

