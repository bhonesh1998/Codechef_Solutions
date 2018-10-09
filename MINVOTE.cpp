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
	int t ;
	sf("%d",&t);
 
	while(t--)
	{
 
	int co,n,i,add=0,j,t;
 
	sf("%d",&n);
	int a[n],b[n]={0};
	for(i=0;i<n;i++)
		sf("%d",&a[i]);
	for(i=0;i<n;i++)
		{
			add=0;
			b[i+1]++;
 
 
			for(j=i+2;j<n;j++)
			{
					t=a[i];
					add+=a[j-1];
 
					if(add<=t) 
						b[j]++;
					else 
						break;
					co++;
			}
 
			add=0;
			j=0;
			b[i-1]++;
 
 
			for(j=i-2;j>=0;j--)
			{
				t=a[i];
				add+=a[j+1];
				if(add<=t)
					b[j]++;
				else
					break;
			}
		}
 
		for(i=0;i<n;i++)
			pf("%d ",b[i]);
		pf("\n");
 
	}
} 
