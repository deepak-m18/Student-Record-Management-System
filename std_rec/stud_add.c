#include"student.h"
void stud_add(SLL **ptr)
{
	SLL *new;
	int r=1;
	new=malloc(sizeof(SLL));
	printf("ENTER NAME & MARKS:\n");
	scanf("%s %f",new->name,&new->percentage);
	if(*ptr==0)
	{
		new->rollno=r;
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		SLL *pos=*ptr;
		while(pos!=0 && pos->rollno == r)
		{
			r++;
			pos=pos->next;
		}
		new->rollno=r;
		pos=*ptr;
		while((pos->next!=0) && (new->rollno > pos->next->rollno))
			pos=pos->next;
		new->next=pos->next;
		pos->next=new;
	}
}
 
