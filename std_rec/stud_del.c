#include"student.h"
void stud_del(SLL **ptr)
{
	char op;
        int num;
	if(*ptr==0)
	{
		printf("NO RECORDS FOUND\n");
		return;
	}

	printf("Enter your choice to delete\n");
	printf("---------------------------\n");
	printf(" r/R : Enter roll number to delete\n n/N : Enter name to delete\n");
	scanf(" %c",&op);
	SLL *del=*ptr,*prev;
	if((op=='r')||(op=='R'))
	{
		int num;
		printf("Enter roll num:\n");
		scanf("%d",&num);
		while(del!=0)
		{  
			if(num==del->rollno)
			{
				if(*ptr==del)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("Roll Number Not Found\n");
		return;
	}
	else if((op=='n')||(op=='N'))
	{
		int c=0;
		char s[50];
		printf("Enter name\n");
		scanf("%s",s);
		while(del!=0)
		{
			if(strcmp(s,del->name)==0)
				c++;
			del=del->next;
		}
		del=*ptr;
		if(c==0)
			printf("no matching names\n");
		else if(c==1)
			while(del!=0)
			{
				if(strcmp(s,del->name)==0)
				{
					prev->next=del->next; 
					free(del);
					return;
				}
				prev=del;
				del=del->next;
			}			
		else if(c>1)
		{
			printf("Multiple records with same Name\n"); 
			while(del!=0)
			{
				if(strcmp(s,del->name)==0)
					printf("%d %s\n",del->rollno,del->name);
				del=del->next;
			}
			printf("Choose the Rollno\n");
			scanf("%d",&num);
                        del=*ptr;
			while(del!=0)
			{  
				if(num==del->rollno)
				{
					if(*ptr==del)
						*ptr=del->next;
					else
						prev->next=del->next;
					free(del);
					return;
				}
				prev=del;
				del=del->next;
			}
			printf("Roll Number Not Found\n");
		}
	}
	else
		printf("Unknown option\n");
}























