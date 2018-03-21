#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i;
		scanf("%d%d",&n,&k);
		int a[n+5];
		int h[1000000]={0};
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
			for(i=0;i<n;i++)
			h[a[i]]++;
			int c=0;
				for(i=0;i<1000000;i++)
			{
				if(c==k)
				break;
				if(h[i]==0)
				{
					h[i]++;c++;
				}
				
				
			}
			int j;
				for(i=0;i<1000000;i++)
			{
				if(h[i]==0)
				{
					j=i;
					break;
					
				}
			}
			
				printf("%d\n",j);
	}
	
	return 0;
} 

