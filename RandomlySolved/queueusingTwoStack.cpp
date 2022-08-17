#include<iostream>
using namespace std;
int tops1=-1;
int tops2=-1;
void push(int stack[],int *top,int element)
{
  (*top)++;
  stack[*top]=element;

}
void pop(int *top)
{
    if(*top!=-1)
    (*top)--;
    else
    cout<<"stack underflowed!"<<endl;

}
void delqueue(int *top1,int *top2,int stackone[],int stacktwo[])
{
     if(*top2!=-1)
     {
        (*top2)--;
        cout<<"deletion successful"<<endl;


     }
     else
    {
        if(*top1==-1)
        cout<<" queue empty"<<endl;
        else
        {
            while(*top1!=-1)
            {
              push(stacktwo,top2,stackone[*top1]);
              pop(top1);
            }
            (*top2)--;
        }

     }
}
void displayqueue(int stack1[],int stack2[],int *top1,int *top2)
{

    if(*top2!=-1&&*top1!=-1)
    {

        for(int i=*top2;i>=0;i--)
            cout<<stack2[i]<<"-";
             for(int i=0;i<=*top1;i++)
            cout<<stack1[i]<<"-";
    }
    else if(*top2==-1&&*top1!=-1)
    {

        for(int i=0;i<=*top1;i++)
            cout<<stack1[i]<<"-";
    }
    else
    {
        for(int i=*top2;i>=0;i--)
            cout<<stack2[i]<<"-";

    }
}

int main()
{
    int n;
    cout<<"enter the  maximum number of elements."<<endl;
    cin>>n;
    int stack1[n],stack2[n];
    push(stack1,&tops1,1);
    push(stack1,&tops1,2);
    push(stack1,&tops1,3);
    push(stack1,&tops1,4);
    push(stack1,&tops1,5);
    displayqueue(stack1,stack2,&tops1,&tops2);
    cout<<endl;
   // delqueue(&tops1,&tops2,stack1,stack2);
    cout<<endl;
     displayqueue(stack1,stack2,&tops1,&tops2);
     push(stack1,&tops1,6);
     cout<<endl;
     displayqueue(stack1,stack2,&tops1,&tops2);
    return 0;
}
