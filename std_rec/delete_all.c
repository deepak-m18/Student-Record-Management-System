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
		printf("Node %d deleted\n",c++);
		sleep(.5);
		free(del);
		del=(*ptr);
	}
        ptr=NULL;
	printf("All Nodes Deleted\n");
}

