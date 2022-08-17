#include<stdio.h>
int display(int ,int ,int );
int main(){
int num,i=1,sum=0;
printf("enter the number");
scanf("%d",&num);
printf("the series is :");
display(num,i,sum);
printf("the sum2 of the series is %d",sum);
return 0;

}
int display(int num,int i,int sum)
{ printf("%d\n",i);
if(i>=num)
{ sum=sum+i;
    printf("the sum of the series is %d\n",sum);
return 0; }
else
    return display(num,i+=1,sum+=i);
}
