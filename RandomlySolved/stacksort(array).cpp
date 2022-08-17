#include<iostream>
using namespace std;
#define scan(in) scanf("%d",&in);
int topinput=-1;
int toptemp=-1;
void push(int arr[],int maxsize,int element,int *top)
{
    if((*top)==maxsize-1)
    printf("cannot enter anymore.STACK FULL!!!\n");
    else
    {
         (*top)++;
          arr[*top]=element;
    }
}
void pop(int *topindex)
{
    (*topindex)--;
}
void sortstack(int inputstack[],int tempstack[],int maxsize)
{
    while(topinput!=-1)
    {
        int tmp=inputstack[topinput];
        pop(&topinput);
        while(toptemp!=-1&&tempstack[toptemp]<tmp)
        {
            push(inputstack,maxsize,tempstack[toptemp],&topinput);
            pop(&toptemp);
        }
        push(tempstack,maxsize,tmp,&toptemp);
    }
}
void display(int stck[],int *topindex)
{
     for(int i=*topindex;i>=0;i--)
     cout<<stck[i]<<endl;
}
int main()
{
    int maxsize;
    cout<<"enter the maxsize of the stack"<<endl;
    cin>>maxsize;
    int inputstack[maxsize],tempstack[maxsize];
    cout<<"enter stack elements for the inputstack"<<endl;
    for(int i=0;i<maxsize;i++)
    {
        int element;
        cin>>element;
        push(inputstack,maxsize,element,&topinput);
    }
    cout<<endl<<"stack elements are"<<endl;
    display(inputstack,&topinput);
    sortstack(inputstack,tempstack,maxsize);
    cout<<"sorted stack is :"<<endl<<endl;
    display(tempstack,&toptemp);
    return 0;
}
