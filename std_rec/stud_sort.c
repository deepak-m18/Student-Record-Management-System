#include"student.h"
void stud_sort(SLL *ptr)
{
	char op;
        int c=0;
	SLL *sort=ptr,*s1,t;
	if(ptr==0)
	{
		printf("NO RECORDS FOUND\n");
		return;
	}
	printf("Select sorting method\n");
	printf(" n/N : Sort with Name\n p/P : Sort with Percentage\n");
	scanf(" %c",&op);
        
        while(sort!=0)
        {
             c++;
             sort=sort->next;
        }
        sort=ptr;
	if((op=='n') || (op=='N'))
	{
		for(int i=0;i<c-1;i++)
		{
			s1=sort->next;
			for(int j=0;j<c-1-i;j++)
			{
				if(strcmp(sort->name,s1->name)>0)
				{
					t.rollno=sort->rollno;
					strcpy(t.name,sort->name);
					t.percentage=sort->percentage;

					sort->rollno=s1->rollno;
					strcpy(sort->name,s1->name);
					sort->percentage=s1->percentage;

					s1->rollno=t.rollno;
					strcpy(s1->name,t.name);
					s1->percentage=t.percentage;
				}
				s1=s1->next;
			}
			sort=sort->next;
		}
	}
        else if((op=='p') || (op=='P'))
	{
		for(int i=0;i<c-1;i++)
		{
			s1=sort->next;
			for(int j=0;j<c-1-i;j++)
			{
				if(sort->percentage < s1->percentage)
				{
					t.rollno=sort->rollno;
					strcpy(t.name,sort->name);
					t.percentage=sort->percentage;

					sort->rollno=s1->rollno;
					strcpy(sort->name,s1->name);
					sort->percentage=s1->percentage;

					s1->rollno=t.rollno;
					strcpy(s1->name,t.name);
					s1->percentage=t.percentage;
				}
				s1=s1->next;
			}
			sort=sort->next;
		}
	}
        else
        printf("Invalid Sorting Choice\n");
}
