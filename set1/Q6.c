//Q7

#include <stdio.h>

int main( void )
{
	int no[100];
	int n,sum,max,i;
	float avg;
	sum = 0;
	printf("Enter the number of integers: \n");
	scanf("%d",&n);
	printf("Enter the numbers \n");
	for(i=0;i<n;i++)
        {
                scanf("%d",&no[i]);
	}
	max = no[0];
	for(i=0;i<n;i++)
	{
		sum = sum + no[i];
		if (no[i] > max)
			max = no[i];
	}
	avg = sum/n;
	printf("The sum is = %d \n",sum);
	printf("The average is = %f \n",avg);
	printf("The largest number is = %d \n",max);
	return 0;

}

