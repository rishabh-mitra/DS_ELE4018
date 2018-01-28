//Q4

#include <stdio.h>

int palindromeFLAG( int n, int n_rev )
{
	if (n == n_rev)
		return 1;
	else
		return 0;
}

int main ( void )
{
	int n,n_rev,x,n_copy,palFLAG;
	n_rev = 0;
	printf("Enter a number : \n");
	scanf("%d",&n);
	n_copy = n;
	while ( n > 0 )
	{
		x = n % 10;
		n_rev = (n_rev * 10) + x;
		n = n / 10;
	}
	palFLAG = palindromeFLAG( n_copy, n_rev);
	if (palFLAG)
		printf("The reverse of %d is %d and it is a palindrome number \n",n_copy,n_rev);
	else
		printf("The reverse of %d is %d and it is not a palindrome number \n",n_copy,n_rev);
	return 0;
}
