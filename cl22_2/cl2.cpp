#include <cstdio>

int main()
{
int p;
int *q;

p = 10;
q =&p;
printf("Value of p = %d\n",p);
printf("Address of p =%u \n",q);
printf("Value of q= %d \n",*q);

*q = 20;

printf("value of q = %d \n",*q);
printf("Value of p is = %d \n",p);
}
