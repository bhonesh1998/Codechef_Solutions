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
	z t,i;
	sf("%lld",&t);
	while(t--)
	{
 
			z n,h,ans,s,sum;
			ans =s=sum= 0;
			sf("%lld %lld",&n,&h);
 
			z a[n];
 
			for(i=0;i<n;i++)
				sf("%lld",&a[i]);
			sort(a,a+n);
			
			for(i=0;i<n;i++)
				sum+=a[i];
 
 
			z hi=a[n-1];
			z lo=(z)ceil((double)sum/(double)h);
 
			while(lo<=hi)
			{
					 s=0;
					if(lo==hi)
					{
						ans=lo;
						break;
					}
 
					z mid = (lo+hi)/2;
 
					for(i=0;i<n;i++)
					{
							s=s+(z)ceil((double)a[i]/(double)mid);
 
							
					}
 
					if(s<=h)
						{
						hi=mid;
						}
						else
						{
							lo=mid+1;
						}
 
					
			}
 
			pf("%lld\n",ans);
 
	}
	return 0;
}  
