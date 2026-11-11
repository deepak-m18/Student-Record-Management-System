#include"student.h"
void stud_mod(SLL *ptr)
{
	char op,s[50];
	int num,p,c=0;
	float mark;
	if(ptr==0)
	{
		printf("NO RECORDS FOUND\n");
		return;
	}
	printf("Enter which record to search for modification\n");
	printf(" r/R : Search by Roll number\n n/N : Search by Name\n p/P : Search by Percentage\n");
	scanf(" %c",&op);
	SLL *mod=ptr;
	if((op=='r') || (op=='R'))
	{
		printf("Enter Rollno:\n");
		scanf("%d",&num);
		while(mod!=0)
		{
			if(mod->rollno==num)
			{
				printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
				printf(" Which record is going to Modify\n 1)Name\n2)Percantage\n");
				scanf("%d",&p);
					if(p==1)
					{
						printf("Update Name\n");
						scanf("%s",mod->name);
					}
					else if(p==2)
					{
						printf("Update Percentage\n");
						scanf("%f",&mod->percentage);
					}
					else
						printf("Unknown Option\n");
			}
			mod=mod->next;
		}
	}
	else if((op=='n') || (op=='N'))
	{
		printf("Enter Name:\n");
		scanf("%s",s);
		while(mod!=0)
		{
			if(strcmp(s,mod->name)==0)
				c++;
			mod=mod->next;
		}
		mod=ptr;
		if(c==0)
			printf("No Name Matches\n");
		else if(c==1)
		{
			while(mod!=0)
			{
				if(strcmp(s,mod->name)==0)
				{
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
					printf(" Which record is going to Modify\n 1)Name\n2)Percantage\n");
					scanf("%d",&p);
						if(p==1)
						{
							printf("Update Name\n");
							scanf("%s",mod->name);
						}
						else if(p==2)
						{
							printf("Update Percentage\n");
							scanf("%f",&mod->percentage);
						}
						else
							printf("Unknown Option\n");
				}
				mod=mod->next;
			}
		}
		else if(c>1)
		{
			printf("Multiple Name Matches\n");
			while(mod!=0)
			{
				if(strcmp(s,mod->name)==0)
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
				mod=mod->next;
			}
			mod=ptr;
			printf("Enter Rollno:\n");
			scanf("%d",&num);
			while(mod!=0)
			{
				if(mod->rollno==num)
				{
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
					printf(" Which record is going to Modify\n 1)Name\n2)Percantage\n");
					scanf("%d",&p);
						if(p==1)
						{
							printf("Update Name\n");
							scanf("%s",mod->name);
						}
						else if(p==2)
						{
							printf("Update Percentage\n");
							scanf("%f",&mod->percentage);
						}
						else
							printf("Unknown Option\n");
				}
				mod=mod->next;
			}
		}
	}
	else if((op=='p') || (op=='P'))
	{
		printf("Enter Precentage:\n");
		scanf("%f",&mark);
		c=0;
		while(mod!=0)
		{
			if(mark==mod->percentage)
				c++;
			mod=mod->next;
		}
		mod=ptr;
		if(c==0)
			printf("No Percentage Matches\n");
		else if(c==1)
		{
			while(mod!=0)
			{
				if(mod->percentage==mark)
				{
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
					printf(" Which record is going to Modify\n 1)Name\n2)Percantage\n");
					scanf("%d",&p);
						if(p==1)
						{
							printf("Update Name\n");
							scanf("%s",mod->name);
						}
						else if(p==2)
						{
							printf("Update Percentage\n");
							scanf("%f",&mod->percentage);
						}
						else
							printf("Unknown Option\n");
				}
				mod=mod->next;
			}
		}
		else if(c>1)
		{
			printf("Multiple Name Matches\n");
			while(mod!=0)
			{
				if(mod->percentage==mark)
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
				mod=mod->next;
			}
			mod=ptr;
			printf("Enter Rollno:\n");
			scanf("%d",&num);
			while(mod!=0)
			{
				if(mod->rollno==num)
				{
					printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
					printf(" Which record is going to Modify\n 1)Name\n2)Percantage\n");
					scanf("%d",&p);
						if(p==1)
						{
							printf("Update Name\n");
							scanf("%s",mod->name);
						}
						else if(p==2)
						{
							printf("Update Percentage\n");
							scanf("%f",&mod->percentage);
						}
						else
							printf("Unknown Option\n");
				}
				mod=mod->next;
			}
		}
	}
}
