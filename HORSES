#include <bits/stdc++.h>
using namespace std;
int main() 
{
int t;
scanf("%d",&t);
while(t--)
{
    int i,q,j,p,n,k=0,sm=0;
	scanf("%d",&n);
p=(n*(n-1))/2;
int a[n],b[p];
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if ((a[i]-a[j]) >0 )
            b[k]=a[i]-a[j];
        else
            b[k]=a[j]-a[i];
		k++;
    }
 
    }
sm=b[0];
   for (q = 0; q < p; q++)
	 {
    	  if ( b[q] < sm )
	 	{
        	 sm = b[q];
      	}
  	 }
printf("%d\n",sm);
}
	return 0;
} 
