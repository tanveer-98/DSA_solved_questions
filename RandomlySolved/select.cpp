#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int s,int e,int x)
{

    int pivot=a[x];

    int temp=a[s];

    a[s]=a[x];

    a[x]=temp;

    int i=s;

    for(int j=i+1;j<=e;j++)
        {

        if(pivot>a[j])
            {

                i++;
                swap(a[i],a[j]);
            }

    }

    temp=a[i];

    a[i]=a[s];

    a[s]=temp;

    return i;

}

int sort_insertion(int* a,int k,int n)
{

    int b[5]; for(int i=k;i<=n;i++)
    {

        b[i-k]=a[i];

    }

for(int i=1;i<=n-k;i++)

{

    int s=b[i];

    int j=i-1,m=0;

    while(s<a[j] && j>=0)

    {

        int temp=a[j+1];

        a[j+1]=a[j];

        a[j]=temp;

        j--;

}

}

return b[(n-k)/2];

}

int apmd(int a[],int s,int e){

int na=ceil((e-s+1)/5);

if(na>0){

int* b=new int[na];

for(int i=1;i<na;i++){

b[i-1]=sort_insertion(a,5*(i-1)+s,5*i-1+s);

}

b[na-1]=sort_insertion(a,5*(na-1)+s,5*na-1+s);

return apmd(b,0,na-1);

}

else

return sort_insertion(a,s,e);

}

int rank(int a[],int s,int e,int r){

int x=apmd(a,s,e);//value at that index

for(int i=s;i<=e;i++)

{

if(a[i]==x)

{

x=i; break;//index finding

}}

x=partition(a,s,e,x);//x is now the endex of pivot

int k=r-x-1;

if(x==r)

return a[x];

else if(x>r){

return rank(a,s,x-1,r);

}

else{

return rank(a,x+1,e,r);

}

}

int main(){

int a[]={4,6,8,3};

int n=4,r;

cout<<"enter rank to find and 0 to exit\n"<<endl;// u can change the ARRAY and can run for any input - Adesh

cin>>r;
cout<<"element = "<<rank(a,0,n-1,r-1)<<endl;



return 0;

}
