#include <stdio.h>
 
int main(void) {
	
	int n,v1,v2,t;
	float t1,t2;
	scanf("%d",&t);
	while(t--)
	{
	t1=0;t2=0;n=0;v1=0;v2=0;
	scanf("%d %d %d",&n,&v1,&v2);
	t1=(1.414*n)/(float)(v1);
	t2=(2*n)/(float)(v2);
 
	if(t1<t2)
	printf("Stairs\n");
	else
	printf("Elevator\n");
	}
	
	return 0;
}
 
