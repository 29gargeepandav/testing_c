#include<stdio.h>

void add(int a, int b) // parameter
{
	printf("\n\naddition of %d and %d is %d", a,b,a+b);
}
void sub(int a, int b)
{
	printf("\n\nSubstraction of %d and %d is %d", a,b,a-b);
}
void mul(int a, int b)
{
	printf("\n\nmultiplication of %d and %d is %d", a,b,a*b);
}
void div(int a, int b)
{
	printf("\n\ndivision of %d and %d is %d", a,b,a/b);
}
void mod(int a, int b)
{
	printf("\n\nmodulas of %d and %d is %d", a,b,a%b);
}
void main()
{
	add(15, 20); //15,20 arguments 
	sub(20, 15);
	mul(20, 5);
	div(20, 10);
	mod(20, 10);
}




