#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,item,i,t;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	
	scanf("%d",&k);
	item=a[k-1];
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{	
			printf("%d\n",i+1);	
			
		}
		
		
	}
	
}
	return 0;
} 
