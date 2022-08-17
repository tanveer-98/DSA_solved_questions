#include<stdio.h>
#include<string.h>
struct student{
     char name[20];
     int roll_no;
     int age;
      };
void display(char n[],int roll,int age)
{
    printf("%s\t %d\n",n,roll);

}
void show(struct student c1)
{
    printf("%s\t %d",c1.name,c1.roll_no);
}
int main(){
 struct student c1={
       "ail",333,34};

display(c1.name,c1.roll_no,c1.age);

show(c1);
 return 0;




}
