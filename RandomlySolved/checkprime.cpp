#include<iostream>

using namespace std;
int main()
{
    bool prime[17];
    int i,j;
    for(i=0;i<=16;i++)
        prime[i]=true;

    prime[1]=false;
    prime[0]=false;



    for(i=2;i<=3;i++)
        for(j=i;j<=16;j=j+i)
            {
                if(j==2||j==3)
                    continue;
                else
                    prime[j]=false;
            }
    for(i=0;i<=16;i++)
        if(prime[i]==true)
            {
                cout<<i<<",";
            }



    return 0;

}
