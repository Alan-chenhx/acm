#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a;
	for (int i=0;i<5;i++)
	{
		cin>>b;
		if(b[0]==a[0]||b[1]==a[1]) 
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
 } 
