#include<stdio.h>
#include<string.h>
#include "student.h"
void sort()
{
	char op;
	if(!hptr)
	{
		ps("No records to sort");
		return;
	}
	ps("|---------------------------------------------|");
	ps("| Enter                                       |");
	ps("| N/n : sort with name                        |");
	ps("| P/p : sort with percentage                  |");
	ps("|                                             |");
	ps("|---------------------------------------------|");

	sf(" %c",&op);
	for(Student* i=hptr;i!=0;i=i->next)
	{
		for(Student* j=i->next;j!=0;j=j->next)
		{

			if((op=='N'||op=='n')&& strcmp(i->name,j->name)>0)
			{
				int roll_t=i->rollno;
				char name_t[50];
				float perc_t=i->percentage;
				strcpy(name_t,i->name);
				i->rollno=j->rollno;
				strcpy(i->name,j->name);
				i->percentage=j->percentage;
				j->rollno=roll_t;
				strcpy(j->name,name_t);
					j->percentage=perc_t;
			}
			else if((op=='P'||op=='p')&& i->percentage>j->percentage)
			{
				int roll_t=i->rollno;
				char name_t[50];
				float perc_t=i->percentage;
				strcpy(name_t,i->name);
				i->rollno=j->rollno;
				strcpy(i->name,j->name);
				i->percentage=j->percentage;
				j->percentage=perc_t;

			}
		}
	}
	ps("Sorting  done successfully.");
}
