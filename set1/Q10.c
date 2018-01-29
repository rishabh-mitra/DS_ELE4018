//Q10

#include <stdio.h>

 struct student{
                int rno;
                char name[100];
        };

int main( void )
{
	struct student stud1;
	printf("Enter roll no. and name of the student \n");
	scanf("%d",&stud1.rno);
	scanf("%[^\n]s",stud1.name);
	printf("The name is : %s \n",stud1.name);
	printf("The roll no. is : %d \n",stud1.rno);
	return 0;
}
