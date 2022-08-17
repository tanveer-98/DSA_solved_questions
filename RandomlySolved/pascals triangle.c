#include<stdio.h>
int main(){
int i,j,arr[7][7];
//arr[0][0]=1;
//arr[1][0]=1;
//arr[1][1]=1;
for(i=0;i<7;i++)
 {
  for(j=0;j<i+1;j++)
  { if(j==0||j==i)
    arr[i][j]=1;
    else
     arr[i][j]=arr[i-1][j-1]+arr[i-1][j];

  }
  }
for(i=0;i<7;i++)
 {
  for(j=0;j<i+1;j++)
  printf("%d ",arr[i][j]);
  printf("\n");
}
return 0;
}
