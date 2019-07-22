#include "stdio.h"
#include "stdlib.h"
struct student
{
  char name[10];
  int roll;
  char branch[10];
  int duration;
};
struct student acad(struct student *stu);
struct student acad1(struct student *stu1);
int main()
{
  struct student *stu3;
  acad(&stu3);


}
struct student acad(struct student *stu)
{
  printf("\n Enter details ");
  scanf("%s %d %s %d",stu->name,&stu->roll,stu->branch,&stu->duration);
  acad1(&stu);
}
struct student acad1(struct student *stu1)
{
  printf("\n details are  ");
  printf("%s %d %s %d",stu1->name,stu1->roll,stu1->branch,stu1->duration);
}
