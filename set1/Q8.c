//Q8

#include <stdio.h>

int main( void )
{
	char str[300];
	printf("Enter a string: \n");
	scanf("%[^\n]s",str);
	printf("The resultant string is = %s \n",str);
	return 0;
}


