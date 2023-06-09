
#include <stdio.h>

int main()
{
   int a[100];
   int  *p[100];
    
    
    
    int i,n,m;
    printf("enter arrey size =");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
    	printf("a[%d]= ",i);
    	scanf("%d",&a[i]);	
    }

    for(i=0;i<n;i++)
    
    {
	    p[i]=&a[i];
    	m=*p[i];
    	printf("%d\n",m*m);
	}
    
}
