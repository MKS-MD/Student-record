#include<stdio.h>
#include<stdlib.h>
#include "student.h"
void del_all()
{
Student* temp;
while(hptr)
{

temp=hptr;
hptr=hptr->next;
free(temp);

}
ps("All records deleted successfully.");
}
