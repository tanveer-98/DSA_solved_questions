#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0)
    {
        int N,i,j,k,p;
        cin>>N;

        bool prime[N];

        for(i=0;i<=N;i++)
        prime[i]=true;

         prime[1]=false;
         prime[0]=false;



    for(i=2;i<=3;i++)
        for(j=i;j<=N;j=j+i)
            {
                if(j==2||j==3)
                    continue;
                else
                    prime[j]=false;
            }

    for(i=0;i<N;i++)
    {
        if(prime[i]==true){
            for(j=0;j<N;j++){
                if(pow(prime[i],j)==N)
                {
                    k=j;
                    p=i;
                }
            }
        }
    }
        cout<<p<<"\n"<<k;
        T--;
    }
    return 0;
}
