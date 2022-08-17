#include<iostream>
using namspace std;
#define scan(in) scanf("%d",&in);
int topinput=-1;
int toptemp=-1;
void push(int arr,int maxsize,int element,int *top)
{
    if(top==maxsize-1)
    printf("cannot enter anymore.STACK FULL!!!\n");
    else
    {
         *top++;
        arr[top]=element;
    }
}
void pop(int *topindex)
{
  *topindex--;
}
void display(int stack[],int *topindex)
int main()
{
 int maxsize;
 cin>>maxsize;
 int inputstack[n],tempstack[n];
 cout<<"enter stack elements for the inputstack"<<endl;

 for(int i=0;i<n;i++)
 {
   int element;
   cin>>element;
   push(inputstack,maxsize,element,&topinput);

 }
 cout<<endl<<"stack elements are"<<endl;

 for(int i=0;i<n;i++)
    cout<<inputstack[i]<<endl;


return 0;
}
