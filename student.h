#ifndef _STUDENT_H_
#define _STUDENT_H_
#define pf printf
#define ps puts
#define sf scanf
typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
}Student;

extern Student* hptr;
void add();
void del();
void show();
void mod();
void save();
void sort();
void del_all();
void rev();

#endif
