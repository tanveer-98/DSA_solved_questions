#include<stdio.h>
int main()
{
int *p[3];
int **k;
k=p;
int x[3]={1,2,3};
int  y[3]={4,5,6};
int z[3]={7,8,9};

p[0]=x;
p[1]=y;
p[2]=z;

printf("%d\n",*(*(p+1)+1                                                                                                                                                                          ));
for(int i=0;i<3;++i)
   {
       for(int j=0;j<3;++j)
        {
           printf("%d",*(p[i]+j));
        }

      printf("\n");
   }
return 0;
}
