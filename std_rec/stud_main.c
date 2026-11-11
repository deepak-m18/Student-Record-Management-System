#include"student.h"
int main()
{
SLL *headptr=0;
char op;
show_data(&headptr);
while(1)
{
printf("------STUDENT RECORD MENU------\n");
printf("\n a/A : ADD NEW RECORD\n d/D : DELETE A RECORD\n s/S : SHOW THE LIST\n m/M : MODIFY A RECORD\n v/V : SAVE RECORDS\n e/E : EXIT\n t/T : SORT THE LIST\n l/L : DELETE ALL THE RECORDS\n r/R : REVERSE THE LIST\n");
printf("\nEnter your Choice: \n");
scanf(" %c",&op); 
switch(op)
{
case 'a'|'A': stud_add(&headptr);break;
case 'd'|'D': stud_del(&headptr);break;
case 's'|'S': stud_show(headptr);break;
case 'm'|'M': stud_mod(headptr);break;
case 'v'|'V': stud_save(&headptr);break;
case 'e'|'E': printf("Enter Exit Option\n");
              printf(" s/S : Save and Exit\n e/E : Exit Without Saving\n");
              scanf(" %c",&op);
              if((op=='s')||(op=='S'))
                  stud_save(&headptr);
              else if((op=='e')||(op=='E'))
                    stud_del_all(&headptr);
              exit(0);
case 't'|'T': stud_sort(headptr);break;
case 'l'|'L': stud_del_all(&headptr);break;
case 'r'|'R': stud_rev(&headptr);break;
}
}
return 0;
}
