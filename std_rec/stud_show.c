#include"student.h"
void stud_show(SLL *ptr)
{
        if(ptr==0)
        {
                printf("NO RECORDS FOUND\n");
                return;
        }
        printf("Roll No.\tName\t\tPercentage\n");
        printf("-----------------------------------------------\n");
        while(ptr!=0)
        {
                printf(" %-15d%-18s%-10.2f\n",ptr->rollno,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
        printf("-----------------------------------------------\n");
}
