//Q2c

#include <stdio.h>

int addition( int, int );
int subtraction( int, int );
int multiplication( int, int );
int division( int, int );
int modulus( int, int );

int main( void )
{
	int n1,n2,add,sub,mul,div,mod;
	printf("Enter 2 numbers : \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	add = addition( n1, n2 );
	sub = subtraction( n1, n2 );
	mul = multiplication( n1, n2 );
	div = division( n1, n2 );
	mod = modulus( n1, n2);
	printf("Addition of %d and %d is %d \n",n1,n2,add);
	printf("Subtraction of %d and %d is %d \n",n1,n2,sub);
	printf("Multiplication of %d and %d is %d \n",n1,n2,mul);
	printf("Division of %d and %d is %d \n",n1,n2,div);
	printf("Modulus of %d and %d is %d \n",n1,n2,mod);
	return 0;
}

int addition( int n1,int n2 )
{
	return (n1+n2);
}

int subtraction( int n1, int n2 )
{
	return (n1-n2);
}

int multiplication( int n1, int n2 )
{
	return (n1*n2);
}

int division( int n1, int n2 )
{
	return (n1/n2);
}

int modulus( int n1,int n2 )
{
	return (n1%n2);
}
