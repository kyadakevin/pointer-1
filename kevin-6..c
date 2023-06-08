#include<stdio.h>

main()
{
	int k=50,b=80;
	int *k1,*b1,*kb;
	
	k1=&k;
	b1=&b;
	
	kb = k1;
	k1 = b1;
	b1 = kb;
	
	printf("k = %u = %d",k1,*k1);
	printf("\nb = %u = %d",b1,*b1);
	
}
