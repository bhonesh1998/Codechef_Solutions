/*
***********************************************************
***********************************************************
 
NAME-BHONESH CHAWLA
REGNO-20164017
BATCH-CS-1
CONTACT-+918619127663
EMAIL-rajachawla778@gmail.com
***********************************************************
***********************************************************
*/
#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define z long long int
using namespace std ;
 
 
 
int main()
{
		int i,t;
		sf("%d",&t);
		while(t--)
		{
		string s;
		cin>>s;
		for(i=0;i<s.length();i++)
				s[i]=122-s[i]+97;
		cout<<s<<endl;
		}
}	
