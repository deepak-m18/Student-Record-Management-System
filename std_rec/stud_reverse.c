#include"student.h"
void stud_rev(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("NO RECORDS FOUND\n");
		return;
	}
	int c=0;
	SLL *rev=*ptr; 
	while(rev!=0)
	{
		c++;
		rev=rev->next;
	}
	rev=*ptr;
	if(c>1)
	{
		SLL *t=*ptr;
                SLL **a=malloc(sizeof(SLL*)*c);
		for(int i=0;i<c;i++)
		{
			a[i]=t;
			t=t->next;
		}
		for(int i=c-1;i>0;i--)
			a[i]->next=a[i-1];
		a[0]->next=0;
		*ptr=a[c-1];
	}
}
