
#include<iostream>
using namespace std;

int main()
{
  int B,m,j,k,l,temp;
  cin>>B;
  temp=B;
  int Brick[10001];
  for(m=0;B>0;m++)
  {
    for(j=3*m;j<(m+1);j++)
    {
            Brick[j+1]=1;
            B--;
    }
    for(k=3*m+j;k<2*m+1;k++)
    {

            Brick[k+1]=0;
            B--;
    }
  }
  for(l=1;l<=temp;l++)
    {
      cout<<Brick[l]<<",";
    }

}
