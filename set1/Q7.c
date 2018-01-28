//Q7

#include <stdio.h>

int main ( void )
{
	int ch;
	printf("Enter a character \n");
	ch = getchar();
	fflush(stdout);
	printf("The ASCII value of %c is = %d \n",ch,ch);
	return 0;
}
