//Q5c

#include <stdio.h>

void swap(int *, int *);

int main( void )
{
	int n1,n2;
	printf("Enter two numbers \n");
	scanf("%d %d",&n1,&n2);
	printf("The numbers before swapping are %d and %d \n",n1,n2);
	swap(&n1,&n2);
	printf("The numbers after swapping are %d and %d \n",n1,n2);
	return 0;
}

void swap (int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
