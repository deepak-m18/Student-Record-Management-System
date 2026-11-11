#include"student.h"
void stud_del_all(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("NO RECORDS FOUND\n");
		return;
	}
	SLL *del=*ptr;
	int c=1;
	while(del)
	{
		*ptr=del->next;
		c++;
		free(del);
		del=*ptr;
	}
	printf("All %d Nodes Deleted\n",c);
}

