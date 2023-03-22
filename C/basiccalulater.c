#include<stdio.h>

main()
{
	int a, b, add, sub, multi, div, mod;
	a=10;
	b=2;
	add = a+b;
	sub = a-b;
	multi= a*b;
	div= a/b;
	mod=a%b;
	printf("addition of two avlue is a=%d and b=%d sum is %d", a,b,add);
	printf("\nsubstraction of two avlue is a=%d and b=%d substaction is %d", a,b,sub);
	printf("\nmultiplication of two avlue is a=%d and b=%d multiplication is %d", a,b,multi);
	printf("\ndivision of two avlue is a=%d and b=%d divison is %d", a,b,div);
	printf("\nmodulation of two avlue is a=%d and b=%d modulas is %d", a,b,mod);
}
