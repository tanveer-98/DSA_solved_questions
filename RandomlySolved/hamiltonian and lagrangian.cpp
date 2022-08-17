#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    int marks[1000000];
    for(i=0;i<N;i++)
    {
        cin>>marks[i];
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++){
            if(marks[i]<marks[j]){
                break;
            }
            cout<<marks[i]<<" ";
        }
    }


    return 0;
}
