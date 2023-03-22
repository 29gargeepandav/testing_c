#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enetr a value of a:");
	scanf("%d",&a);
	printf("Enetr a value of b:");
	scanf("%d",&b);
	
	printf("before swapping value of a=%d, b=%d \n\n", a,b);
	//printf("a=%d, b=%d", b,a);
	
	c=a;
	a=b;
	b=c;

	/* swapping without third variable
	a=a+b;
	b=a-b; 
	a=a-b;
	*/
	
	printf("after sawping value of a=%d, b=%d",a,b);
	
	
}
