#include"student.h"
void show_data(SLL **ptr)
{
        FILE *fp;
        SLL *save;
        if(*ptr==0)
        {
                fp=fopen("student.dat","r");
                if(fp==0)
                {
                        printf("NO FILE EXIST\n");
                        return;
                }
                else
                {
                        while(1)
                        {
                                save=malloc(sizeof(SLL));
                                if(fscanf(fp,"%d %s %f",&save->rollno,save->name,&save->percentage)==-1)
                                        break;
                                save->next=0;
                                if(*ptr==0)
                                        *ptr=save;
                                else
                                {
                                        SLL *last=*ptr;
                                        while(last->next)
                                                last=last->next;
                                        last->next=save;
                                }
                        }
                        return;
                }
                fclose(fp);
        }
}

void stud_save(SLL **ptr)
{
        FILE *fp;
        SLL *save;
        if(*ptr==0)
        {
                        printf("NO RECORDS TO SAVE\n");
                        return;
        }
        else
        {
                save=*ptr;
                fp=fopen("student.dat","w");
                while(save!=0)
                {
                        fprintf(fp,"%d %s %f\n",save->rollno,save->name,save->percentage);
                        save=save->next;
                }
                fclose(fp);
        printf("RECORDS SAVED SUCCESSFULLY\n");
        }
}
