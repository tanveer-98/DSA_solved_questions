#include<iostream>
#define scan(in) scanf("%d",&in);
using namespace std;
int topstack1=-1;
int topstack2;
int maxsize;
void pushstack1(int stck1[])
{
    int element;
    if(topstack1==maxsize-1)
        printf("stack1 is full.\n");
    else if(topstack1+1<topstack2)
    {
        printf("enter the element to push\n");
        scan(element);
       stck1[++topstack1]=element;
    }
    else
        printf("stack2 is full.\n");

}
void pushstack2(int stck2[])
{
    int element;
    if(topstack2==-1)
        printf("stack2 is full.\n");
    else if(topstack2-1>topstack1)
    {

        printf("enter the element to push\n");
        scan(element);
        stck2[--topstack2]=element;
    }
    else
        printf("stack2 is full.\n");
}
int popstck1()
{
    if(topstack1==-1)
        printf("stack1 underflow.\n");
        else
    topstack1--;
}
void popstck2()
{
    if(topstack2==maxsize)
        printf("stack2 underflow.\n");
        else
    topstack2--;
}
void display1(int stck[],int *topindex)
{
     for(int i=*topindex;i>=0;i--)
     cout<<stck[i]<<endl;
}
void display2(int stck[],int *topindex)
{
     for(int i=*topindex;i<=maxsize-1;i++)
     cout<<stck[i]<<endl;
}
int main()
{
    cout<<"enter the maxsize"<<endl;
    cin>>maxsize;
    topstack2=maxsize;
    int arr[maxsize];
    int choice;
    printf("\n\n");
     printf("enter the choice");
            printf("\n1.push element in stack \n2.pop element from stack 1 .\n3.push element in stack 2.\n4.pop element from stack 2.\n5.print stack 1.\n 6.print stack 2.\n.7.exit\n");
     printf("\n\n");
    do{

            scan(choice);
            switch(choice)
            {


                case 1:pushstack1(arr);
                break;
                case 2: popstck1();
                break;
                case 3:pushstack2(arr);
                break;
                case 4:popstck2();
                break;
                case 5:display1(arr,&topstack1);
                break;
                case 6:display2(arr,&topstack2);
                break;
                case 7:
                break;
                default :printf("invalid choice!!!.\n");
            }
    }while(choice!=7);


return 0;
}
