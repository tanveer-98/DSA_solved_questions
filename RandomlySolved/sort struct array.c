#include<stdio.h>
#include<string.h>
struct kindle{
          char name[20];
          int roll;

        };
void input(struct kindle c[])

{
 int i;
 for(i=0;i<5;i++)
 {
     printf("enter the name and roll number of %d member",i+1);
    scanf("%s %d",c[i].name,&c[i].roll);

 }



}
void sort(struct kindle c[])
{ int i,j,k;
char temp[10];
  for(i=0;i<5;i++)
  for(j=i+1;c[j].name!='\0';j++)
  {
    if(strcmp(c[i].name,c[j].name)>0)
  {
     strcpy(temp,c[j].name);
     strcpy(c[j].name,c[i].name);
     strcpy(c[i].name,temp);
      k=c[i].roll;
      c[i].roll=c[j].roll;
      c[j].roll=k;
  }

  }

}
void display(struct kindle c[]);
int main(){
struct kindle c1[5];
input(c1);
sort(c1);
display(c1);
return 0;

}

void display(struct kindle c[])
{
  int i;
 for(i=0;i<5;i++)
   printf("the name is %s\t and roll number is %d ",c[i].name,c[i].roll);


}





