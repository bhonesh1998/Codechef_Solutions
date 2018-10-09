#include<stdio.h>
int main()
{
        long i,n,k,c=0;
        scanf("%d%d",&n,&k);
        long a[n];
        for(i=0;i<n;i++)
        {
               scanf("%d",&a[i]);
 
        }
          for(i=0;i<n;i++)
        {
 
        if(a[i]%k==0)
        c++;
        }
        printf("%d",c);
        return 0;
 
}
