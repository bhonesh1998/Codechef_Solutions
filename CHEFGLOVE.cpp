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
	int t;
	sf("%d",&t);
	while(t--)
	{
	int n,i,frc=0,bac=0;
	sf("%d",&n);
	int fl[n],sl[n];
 
	for(i=0;i<n;i++)
		sf("%d",&fl[i]);
	for(i=0;i<n;i++)
		sf("%d",&sl[i]);
	for(i=0;i<n;i++)
		{
			if(fl[i]<=sl[i])
				frc++;
			if(fl[i]<=sl[n-i-1])
				bac++;
		}
 
		if(frc==n && bac==n)
			pf("both\n");
		else if(bac==n)
			pf("back\n");
		else if(frc==n)
			pf("front\n");
		else
			pf("none\n");
 
 
	}
	return 0;
}  
