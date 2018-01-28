//Q3

#include <stdio.h>

int main( void )
{
	int n,no,sum,max,i;
	float avg;
	sum = 0;
	max = 0;
	printf("Enter the number of integers: \n");
	scanf("%d",&n);
	printf("Enter the numbers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&no);
		sum = sum + no;
		if (no > max)
			max = no; 
	}
	avg = sum/n;
	printf("The sum is = %d \n",sum);
	printf("The average is = %f \n",avg);
	printf("The largest number is = %d \n",max);
	return 0;

}
